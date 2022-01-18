#include<iostream>
using namespace std;

class Employee{

private:
    int empno;
    string rank;
    string department;
    int salary;

public:
    Employee(){

    }    

    Employee(int no, string ra,string depart,int sal){
        empno = no;
        rank = ra;
        department = depart;
        salary = sal;
    }

    void initializeData(){
        cout<<"\nEnter emp no : ";
        cin>>empno;

        cout<<"\nEnter emp rank : ";
        cin>>rank;

        cout<<"\nEnter emp department : ";
        cin>>department;

        cout<<"\nEnter emp salary : ";
        cin>>salary;
    }

    void showData(){
        cout<<"\nEmpId : "<< empno;
        cout<<"\nrank : "<< rank;
        cout<<"\ndepartment : "<<department;
        cout<<"\nsalary : "<<salary;
        cout<<endl;
    }


};

int main(){
    int len = 5;
    Employee empArr[len];

    for(int i=0;i<len;i++){
        empArr[i].initializeData();
    }

    for(int i = 0; i<len;i++){
        empArr[i].showData();
    }

return 0;
}