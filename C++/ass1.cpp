#include<iostream>
using namespace std;
int main(){
    double loan,rate,time,monthly_interest,interest;

    cout<<"\nEnter loan ammount : ";
    cin>>loan;

    cout<<"\nEnter rate : ";
    cin>>rate;

    cout<<"\nEnter No. of Month : ";
    cin>>time;

    monthly_interest=loan*(rate/100);
    interest=time*monthly_interest;

    cout<<"\nMonthly_Interest : "<<monthly_interest;
    cout<<"\nYour Interest is : "<<interest<<endl;


    return 0;
}
