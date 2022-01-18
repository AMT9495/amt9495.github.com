#include<iostream>
using namespace std;
void calculateDiscountItem(double price,double discount){
   double after_discount;
 
   after_discount=price-(price*(discount/100));
 
   cout<<"\nAfter discount price : "<<after_discount<<endl;
}

void calculateInterest(double loan,double rate,double time){
    double monthly_interest,interest;
    
    monthly_interest=loan*(rate/100);
    interest=time*monthly_interest;
    
    cout<<"\nMonthly_Interest : "<<monthly_interest;
    cout<<"\nYour Interest is : "<<interest<<endl;
}

void countZeroOccurences(){
    int num;
    int countZero=0;
    char ch='a';
    char count=0;

   while(ch != 's'){
        cout<<"Enter any number : ";
        cin>>num;
        cout<<endl;
 
        if(num == 0){
           countZero++;
       }

        cout<<"\nIf you want to stop, press 's' : ";
        cin>>ch;
        cout<<endl;
    }
        cout<<"The number of count You have entered Zero is : "<<countZero<<endl;
} 

int main(){
    double price,discount;

   cout<<"\nEnter Price : ";
   cin>>price;
 
   cout<<"\nEnter discount Value : ";
   cin>>discount;

   calculateDiscountItem(price,discount);
   cout<<endl;

   double loan_amount,interest_rate,noOfMonth;
    cout<<"\nEnter loan ammount : ";
    cin>>loan_amount;
        
    cout<<"\nEnter rate : ";
    cin>>interest_rate;
        
    cout<<"\nEnter No. of Month : ";
    cin>>noOfMonth;

    calculateInterest(loan_amount,interest_rate,noOfMonth);
    cout<<endl;

    countZeroOccurences();
    cout<<endl;

    return 0;
}
