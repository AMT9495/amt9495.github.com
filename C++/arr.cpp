#include<iostream>
using namespace std;
int main(){
int arrSize =3;
int rno[arrSize];
string name[arrSize];
string address[arrSize];
string searchName;
for(int i=0;i<arrSize;i++){
    cout<<"For student "<<(i+1)<<" : \n";
    cout<<"Enter Rno : ";
    cin>>rno[i];
    cin.ignore();
    cout<<"Enter name : ";
    getline(cin,name[i]);
    cout<<"Enter address : ";
    getline(cin,address[i]);
}
cout<<"Enter search name : ";
getline(cin,searchName);
bool flag=0;
int foundIndex = -1;
for(int i=0;i<arrSize;i++){
    if(searchName == name[i]){
        flag=1;
        foundIndex = i;
        break;
    }
}

if(flag == 0)
{

    cout<<searchName<< " is not found!";
}
else{
    cout<<searchName<< "'s info\n";
    cout<<"Rno : "<<rno[foundIndex];
    cout<<"\nAddress : "<<address[foundIndex];
}
return 0;
}