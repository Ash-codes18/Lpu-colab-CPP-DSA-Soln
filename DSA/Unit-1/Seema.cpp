#include <iostream>
#include <vector>
#include <algorithm>

class Ticket {
public:
    Ticket(int id) : ticketId(id) {}
    int getTicketId() const {
        return ticketId;
    }
private:
    int ticketId;
};

class Reservation {
public:
    void reserveTicket(const Ticket& ticket) {
        reservedTickets.push_back(ticket);
    }

    friend void cancelReservation(Reservation& reservation, const Ticket& ticket) {
        auto it = std::find_if(reservation.reservedTickets.begin(), reservation.reservedTickets.end(),
                               [&ticket](const Ticket& t) {
                                   return t.getTicketId() == ticket.getTicketId();
                               });

        if (it != reservation.reservedTickets.end()) {
            std::cout << "Ticket with ID " << ticket.getTicketId() << " has been canceled." << std::endl;
            reservation.reservedTickets.erase(it);
        } else {
            std::cout << "Ticket with ID " << ticket.getTicketId() << " not found in the reservation." << std::endl;
        }
    }

    void displayReservedTickets() const {
        std::cout << "Reserved Tickets:";
        for (const Ticket& ticket : reservedTickets) {
            std::cout << " " << ticket.getTicketId();
        }
        std::cout << std::endl;
    }

private:
    std::vector<Ticket> reservedTickets;
};

int main() {
    int N;
    std::cin >> N;

    std::vector<Ticket> tickets;
    for (int i = 0; i < N; ++i) {
        int ticketId;
        std::cin >> ticketId;
        tickets.push_back(Ticket(ticketId));
    }

    Reservation reservation;
    for (const Ticket& ticket : tickets) {
        reservation.reserveTicket(ticket);
    }

    int cancelId;
    std::cin >> cancelId;
    Ticket cancelTicket(cancelId);

    std::cout << "Reserved Tickets:";
    for (const Ticket& ticket : tickets) {
        std::cout << " " << ticket.getTicketId();
    }
    std::cout << std::endl;

    cancelReservation(reservation, cancelTicket);

    reservation.displayReservedTickets();

    return 0;
}
