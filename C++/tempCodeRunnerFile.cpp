#include<iostream>
using namespace std;
int main(){
    double price,discount,after_discount;

    cout<<"\nEnter Price : ";
    cin>>price;

    cout<<"\nEnter discount Value : ";
    cin>>discount;

    after_discount=price-(price*(discount/100));

    cout<<"\nAfter discount price : "<<after_discount<<endl;

    return 0;
}