#include<iostream>
using namespace std;
int main(){
int mark=-1;
/*    if(mark>=50){
        cout<<mark<<" : pass";
    }
    else{
        cout<<mark<<" : fail";
    }

if(mark<=50){
    cout<<mark<<" : fail";
}
else if(mark>50 && mark<=79){
    cout<<mark<<" : pass";
}
else if(mark>=80){ 
    cout<<mark<<" : distinction";
}
cout<<"\n.........The End............\n";
    return 0;
}
*/

if(mark >= 0 && mark <50){
    cout<<mark<<" : fail";
}

if(mark >=50 && mark <80){
    cout<<mark<<" : pass";
}

if(mark>=80){ 
    cout<<mark<<" : distinction";
}

else{
    cout<<mark<<" : invalid mark";
}

return 0;
}