#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day (1-7)";
    cin>>day;

    switch(day){
        case 1 : cout<<"Mon";
        case 2 : cout<<"Tue";
        case 3 : cout<<"Wed";
        case 4 : cout<<"Thurs";
        case 5 : cout<<"Fri";
        case 6 : cout<<"Sat";
        case 7 : cout<<"Sun";

    }
    cout<<"\n.........The End...............\n";
}