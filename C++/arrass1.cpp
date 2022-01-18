#include<iostream>
using namespace std;
int main(){
    int num[5];
    int i;
    
    for(i=0;i<5;i++){
        cout<<"Enter a number : ";
        cin>>num[i];
        cout<<endl;
    }
    for(i=0;i<5;i++){
        if(num[i]%3){
        }
        else{
           cout<<num[i]<<"\t"; 
        }
        
    }
    return 0;
}