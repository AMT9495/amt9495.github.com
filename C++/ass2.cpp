#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;

    cout<<"\nEnter First Number : ";
    cin>>num1;

    cout<<"\nEnter Second Number : ";
    cin>>num2;

    cout<<"\nEnter Third Number : ";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"\nFirst Number is the Largest number\n";

        if(num2<num1 && num2<num3){
            cout<<"\nSecond Number is the Smallest Number\n";
        }
        else if(num3<num1 && num3<num2){
            cout<<"\nThird Number is the Smallest Number\n";
        }
        else{
        cout<<"\nTwo Rest Number Are Same\n";
        }
        
    }

    else if(num1<num2 && num1<num3){
        cout<<"\nFirst Number is the Smallest number\n";

        if(num1<num2 && num3<num2){
            cout<<"\nSecond Number is the Largest Number\n";
        }
        else if(num1<num3 && num2<num3){
            cout<<"\nThird Number is the Largest Number\n";
        }
        else{
        cout<<"\nTwo Rest Number Are Same\n";
        }
    }

    else if(num2<num1 && num2<num3){
        cout<<"\nSecond Number is the Smallest number\n";

        if(num2<num1 && num3<num1){
            cout<<"\nFirst Number is the Largest Number\n";
        }
        else if(num1<num3 && num2<num3){
            cout<<"\nThird Number is the Largest Number\n";
        }
        else{
        cout<<"\nTwo Rest Number Are Same\n";
        }
    }

    else if(num2>num1 && num2>num3){
        cout<<"\nSecond Number is the Largest number\n";

        if(num1<num2 && num1<num3){
            cout<<"\nFirst Number is the Smallest Number\n";
        }
        else if(num3<num1 && num3<num2){
            cout<<"\nThird Number is the Smallest Number\n";
        }
        else{
        cout<<"\nTwo Rest Number Are Same\n";
        }
    }

    else if(num3<num2 && num3<num1){
        cout<<"\nThird Number is the Smallest number\n";

        if(num2<num1 && num3<num1){
            cout<<"\nFirst Number is the Largest Number\n";
        }
        else if(num3<num2 && num1<num2){
            cout<<"\nSecond Number is the Largest Number\n";
        }
        else{
        cout<<"\nTwo Rest Number Are Same\n";
        }
    }

    else if(num3>num1 && num3>num2){
        cout<<"\nThird Number is the Largest Number";

        if(num1<num2 && num1<num3){
            cout<<"\nFirst Number is the Smallest Number\n";
        }
        else if(num2<num1 && num2<num3){
            cout<<"\nSecond Number is the Smallest Number\n";
        }
        else{
        cout<<"\nTwo Rest Number Are Same\n";
        }
    }

    else{
        cout<<"\nThree Number Are Same\n";
    }

    return 0;

}