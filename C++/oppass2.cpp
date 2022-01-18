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

        Student(int no,string na,string cos){
            rno = no;
            name = na;
            course = cos;
        }

        int getRollNo(){
            return rno;
        }
        
        void showData(){
            cout<<"\nStudent Roll No : "<<rno;
            cout<<"\nStudent Name : "<<name;
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
    Student stu[5];
for(int i=0; i<5 ; i++){
    int rno;
    string name;
    string course;
    cout<<"\nEnter student roll No : ";
    cin>>rno;

    cin.ignore();

    cout<<"\nEnter student name : ";
    getline(cin,name);

    cout<<"\nEnter student cos : ";
    getline(cin,course);

    Student s(rno,name,course);

    stu[i] = s;
}

cout<<"\n____________ All Student Data List __________\n";

for(int i=0;i<5;i++){
        stu[i].showData();
    }

int rollno;
cout<<"\nEnter search roll no : ";
cin>>rollno;
Student :: searchRollno(stu,rollno);
   

return 0;
}