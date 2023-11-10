#include <iostream>
#include <vector>
using namespace std;

const int MAX_EVENTS = 20;

// Custom exception class for invalid event ID
class InvalidEventIDException : public exception {
public:
    const char* what() const throw() {
        return "Invalid event ID.";
    }
};

// Custom exception class for insufficient seats
class InsufficientSeatsException : public exception {
public:
    const char* what() const throw() {
        return "Insufficient seats available for booking.";
    }
};

// Event class to store event details
class Event {
private:
    string id;
    int totalSeats;
    int bookedSeats;

public:
    Event(string id, int totalSeats) {
        this->id = id;
        this->totalSeats = totalSeats;
        this->bookedSeats = 0;
    }

    string getID() {
        return id;
    }

    int getTotalSeats() {
        return totalSeats;
    }

    int getBookedSeats() {
        return bookedSeats;
    }

    void bookTickets(int numTickets) {
        if (numTickets > totalSeats - bookedSeats) {
            throw InsufficientSeatsException();
        }
        bookedSeats += numTickets;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Event> events;

    for (int i = 0; i < n; i++) {
        string id;
        int totalSeats;
        cin >> id >> totalSeats;

        events.push_back(Event(id, totalSeats));
        cout << "Event with ID " << id << " added with " << totalSeats << " seats." << endl;
    }

    try {
        string eventID;
        int numTickets;
        cin >> eventID >> numTickets;

        bool eventFound = false;
        for (int i = 0; i < events.size(); i++) {
            if (events[i].getID() == eventID) {
                events[i].bookTickets(numTickets);
                cout << numTickets << " tickets booked for event with ID " << eventID << ". Remaining seats: " << events[i].getTotalSeats() - events[i].getBookedSeats() << endl;
                eventFound = true;
                break;
            }
        }

        if (!eventFound) {
            throw InvalidEventIDException();
        }
    } catch (InvalidEventIDException& e) {
        cout << "Exception caught: Error: " << e.what() << endl;
    } catch (InsufficientSeatsException& e) {
        cout << "Exception caught: Error: " << e.what() << endl;
    } catch (...) {
        cout << "Exception caught: Error: Maximum number of events reached." << endl;
    }

    return 0;
}
