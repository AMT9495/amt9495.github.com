#include<iostream>
using namespace std;

class Student{

private:
    int rno;
    string name;
    string course;

public:
    Student(){

    }    

    Student(int rno, string name,string course){
        this->rno = rno;
        this->name = name;
        this->course = course;
    }

    int getRollNo(){
        return rno;
    }

    void initializeData(){
        cout<<"\nEnter Student roll no : ";
        cin>>rno;

        cin.ignore();

        cout<<"\nEnter student name : ";
        getline(cin,name);

        cout<<"\nEnter student course : ";
        getline(cin,course);
    }

    void showData(){
        cout<<"\nStudent RollNo. : "<< rno;
        cout<<"\nStudent Name : "<< name;
        cout<<"\nCourse : "<<course;
        cout<<endl;
    }

    static void searchRollno(Student data[],int rollno){
            bool found = 0;
            for(int i=0;i<5;i++){
                Student s = data[i];
                if(s.getRollNo() == rollno){
                    s.showData();
                    found = 1;
                    break;
                }   
            }
            if(found == 0){
                cout<<" search roll no "<<rollno<<" is not found!";
            }
        }


};

int main(){
    int len = 5;
    Student stuArr[len];

    for(int i=0;i<len;i++){
        stuArr[i].initializeData();
    }

    cout<<"\n_______ All Student Data List______________\n";

    for(int i = 0; i<len;i++){
        stuArr[i].showData();
    }

    int rollno;
    cout<<"\nEnter search roll no : ";
    cin>>rollno;
    Student :: searchRollno(stuArr,rollno);

return 0;
} 