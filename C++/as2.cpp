#include<iostream>
using namespace std;
int main(){

    int i;
    int sum=0;
    int count;
    int average;
    for(i=26;i<210;i++){
        sum=sum+i;   
    }
    
    count=i-26;
    average=sum/count;
    cout<<"sum of between 25 and 210 is : "<<sum<<endl;
    cout<<"the no. of number between 25 and 210 is : "<<count<<endl;
    cout<<"the average value between 25 and 210 is : "<<average<<endl;
    return 0;
}