    #include <iostream>
    using namespace std;


    int main()
    {

        int cid, fid, sid, m, initdeposit, dm, wm;
        float roi, initBalance;
        cin >> cid;
        cin >> fid;
        cin >> initdeposit;
        cin >> roi;
        cin >> m;
        cin >> sid;
        cin >> initBalance;
        cin >> dm;
        cin >> wm;

        cout<<"Customer Data"<<endl;
        cout<<"Customer ID: "<<cid<<endl;
        cout<<"Maturity Amount for the FD is: "<<(roi*initdeposit*m)/100<<endl;
        cout<<"Balance in the Savings is: "<<initBalance<<endl;
        cout<<"Withdrawable Account Balance for the customer : "<<initBalance+initdeposit<<endl;

        cout<<endl<<endl;

        cout<<"Customer Data"<<endl;
        cout<<"Customer ID: "<<cid<<endl;
        cout<<"Maturity Amount for the FD is: "<<(roi*initdeposit*m)/100<<endl;
        cout<<"Balance in the Savings is: "<<initBalance+dm<<endl;
        cout<<"Withdrawable Account Balance for the customer : "<<initBalance+initdeposit+dm<<endl;

        cout<<endl<<endl;

        cout<<"Customer Data"<<endl;
        cout<<"Customer ID: "<<cid<<endl;
        cout<<"Maturity Amount for the FD is: "<<(roi*initdeposit*m)/100<<endl;
        cout<<"Balance in the Savings is: "<<initBalance+dm-wm<<endl;
        cout<<"Withdrawable Account Balance for the customer : "<<initBalance+initdeposit+dm-wm<<endl;


        return 0;
    }