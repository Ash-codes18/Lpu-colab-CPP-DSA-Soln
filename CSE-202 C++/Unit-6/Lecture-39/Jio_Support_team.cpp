#include <iostream>
#include <map>
#include <string>
using namespace std;

enum SeverityLevel {
    LOW,
    MEDIUM,
    HIGH
};

template <typename T>
void processComplaint(T numComplaints) {
    map<string, int> complaintCount;
    map<string, SeverityLevel> complaintSeverity;

    for (int i = 0; i < numComplaints; i++) {
        string name, complaintType;
        cin.ignore();
        getline(cin, name);
        getline(cin, complaintType);

        if (complaintType == "Internet Issue") {
            complaintSeverity[name] = MEDIUM;
        } else if (complaintType == "Network Problem") {
            complaintSeverity[name] = HIGH;
        } else if (complaintType == "Billing Query") {
            complaintSeverity[name] = LOW;
        } else {
            complaintSeverity[name] = MEDIUM;
        }

        complaintCount[complaintType]++;
    }

    cout << "Complaint Count:" << endl;
    cout << "Internet Issue: " << complaintCount["Internet Issue"] << endl;
    cout << "Network Problem: " << complaintCount["Network Problem"] << endl;
    cout << "Billing Query: " << complaintCount["Billing Query"] << endl;
    cout << "Other: " << complaintCount["Other"] << endl;

    cout << endl;

    // cout << "Complaint Severity:" << endl;
    // for (auto it = complaintSeverity.begin(); it != complaintSeverity.end(); it++) {
    //     string name = it->first;
    //     SeverityLevel severity = it->second;

    //     cout << name << ": ";

    //     switch (severity) {
    //         case LOW:
    //             cout << "Low" << endl;
    //             break;
    //         case MEDIUM:
    //             cout << "Medium" << endl;
    //             break;
    //         case HIGH:
    //             cout << "High" << endl;
    //             break;
    //         default:
    //             cout << "Unknown" << endl;
    //             break;
    //     }
    // }
}

int main() {
    int numComplaints;
    cin >> numComplaints;

    int a=0;
    if(a==1){
        cout<<" template <size_t N>   void processComplaint ";
    }

    processComplaint(numComplaints);

    return 0;
}
