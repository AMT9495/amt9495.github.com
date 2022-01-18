#include<iostream>
using namespace std;
int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;
    int smallest=0;
    cout<<"Please enter first numbers : ";
    cin>>num1;

    cout<<"Please enter secont number : ";
    cin>>num2;

    cout<<"Please enter third number : ";
    cin>>num3;

    largest=num1;
    if (num2>largest)
        largest =num2;
    if(num3>largest)
        largest = num3;

    smallest=num1;
    if(num2<smallest)
        smallest=num2;
    if(num3<smallest)
        smallest=num3;

    cout<<"The largest number is : "<<largest<<endl;
    cout<<"The smallest number is : "<<smallest<<endl;
    return 0;
}