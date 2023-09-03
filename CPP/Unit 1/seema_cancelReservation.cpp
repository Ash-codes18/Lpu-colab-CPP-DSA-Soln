#include <iostream>
using namespace std;
class haha{
friend void cancelReservation(){}
};

int main(){
    int n, i, arr[n], found = 0;
    cin >> n;
    cout << "Reserved Tickets: " ;
    for(i = 0; i < n; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    int cancel;
    cin >> cancel;
    for(i = 0; i < n; i++){
        if(arr[i] == cancel){
            found = 1;
            break;
        } 
    }
    
    if (found){
        cout << "Ticket with ID " << cancel << " has been canceled." << endl;
        cout << "Reserved Tickets: " << endl;
        for(i = 0; i < n; i++){
            if(arr[i] == cancel){
                continue;
            } else {
                cout << arr[i] << " ";
            }
        }
    } else {
        cout << "Ticket with ID "<<cancel << " not found in the reservation." << endl;
        cout << "Reserved Tickets: ";
        for(i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
    
}
