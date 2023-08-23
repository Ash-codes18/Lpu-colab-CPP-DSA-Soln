#include <iostream>
#include <string>
using namespace std;

class Event{
    private:
    int participantID;
    string participantName;
    public:
    
    static int totalParticipants;
    
    void setParticipant(int ID, const string& name)
    {
        participantID = ID;
        participantName = name;
        totalParticipants++;
    }
    
    static int getTotalParticipants()
    {
        return totalParticipants;
    }
    
};
int Event::totalParticipants = 0;
int main()
{
    int N;
    cin >> N;
    for(int i = 0; i <N; i++)
    {
        int ID;
        string name;
        cin >> ID;
        cin.ignore();
    getline(cin, name);
    
    Event event;
    event.setParticipant(ID, name);
}
cout << "Total Participants: "<<Event::getTotalParticipants()<<endl;

return 0;
}




