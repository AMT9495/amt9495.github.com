#include<iostream>
using namespace std;
int main(){
    string u;
    string p;
    
    char ch='a';

    while(ch !='q'){
        string user_name="mmit";
        string password="admin123";
        
        cout<<"Enter user name : ";
        cin>>u;

        cout<<"Enter password : ";
        cin>>p;
        cout<<endl;
        if(u != user_name && p != password){
            cout<<"user name and password do not match.\n";
        }
        else if(u == user_name && p != password){
            cout<<"password is incorrect.\n";
        }
        else if(u != user_name && p == password){
            cout<<"user name is incorrect.\n";
        }
        else{
            cout<<"Login success.\n";
        }

        cout<<"\nIf you want to quit, press 'q' : ";
        cin>>ch;

    }
return 0;
}