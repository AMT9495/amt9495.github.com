#include<iostream>
using namespace std;
void largestNumber(int first_number,int second_number,int third_number){
    int largest=0;

    largest=first_number;
   if (second_number>largest)
       largest =second_number;
   if(third_number>largest)
       largest = third_number;

    cout<<"largest number is : "<<largest;

}

void smallestNumber(int first_number,int second_number,int third_number){
    int smallest = 0;

    smallest=first_number;
   if(second_number<smallest)
       smallest=second_number;
   if(third_number<smallest)
       smallest=third_number;

    cout<<"smallest number is : "<<smallest;

}

void checkLogin(string uname,string pass){
  
       string user_name="mmit";
       string password="admin123";
      
       if(uname != user_name && pass != password){
           cout<<"user name and password do not match.\n";
       }
       else if(uname == user_name && pass != password){
           cout<<"password is incorrect.\n";
       }
       else if(uname != user_name && pass == password){
           cout<<"user name is incorrect.\n";
       }
       else{
           cout<<"Login success.\n";
       }
   
}


int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout<<"Please enter first numbers : ";
    cin>>num1;
    
    cout<<"Please enter secont number : ";
    cin>>num2;
    
    cout<<"Please enter third number : ";
    cin>>num3;

    largestNumber(num1,num2,num3);
    
    cout<<endl;

    smallestNumber(num1,num2,num3);

    cout<<endl;

    char ch='a';
    while(ch != 'q'){
    string user_name;
    string password;
    cout<<"Enter user name : ";
    cin>>user_name;
 
    cout<<"Enter password : ";
    cin>>password;

    checkLogin(user_name,password);
    cout<<endl;

    cout<<"\nIf you want to quit, press 'q' : ";
    cin>>ch;
    }
    
    return 0;
}