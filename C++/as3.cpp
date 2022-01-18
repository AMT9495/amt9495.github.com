#include<iostream>
using namespace std;
int main(){
    int num;
    int countZero=0;
    int countPositive=0;
    int countNegative=0;
    char ch='a';
    char count=0;
    while(ch != 's'){
        cout<<"Enter any number : ";
        cin>>num;
        cout<<endl;

        if(num<0){
            countNegative++;
        }
        else if(num>0){
            countPositive++;
        }
        else{
            countZero++;
        }
        cout<<"\nIf you want to stop, press 's' : ";
        cin>>ch;
        cout<<endl;

    }

    cout<<"The number of count You have entered Negative number is : "<<countNegative<<endl;
    
    cout<<"The number of count You have entered Positive number is : "<<countPositive<<endl;

    cout<<"The number of count You have entered Zero is : "<<countZero<<endl;

    return 0;
}