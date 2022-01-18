#include<iostream>
using namespace std;
class Product {

    private:
        int barCode;
        string name;
        int price;

    public:
        Product(){
            barCode = 0;
            name = "";
            price = 0;
        }

    Product(int codeno,string name,int price){
        this-> barCode = codeno;
        this-> name = name;
        this-> price = price;
    }

    void setBarCode(int code){
        if(code<0){
            cout<<"Invalid BarCode";
            this-> barCode = 0;
        }
        else{
            this->barCode = code;
        }
        
    }

    int getBarCode(){
        return barCode;
    }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return "I - " + name;
    }

    void showData(){
        cout<<"\nCode : "<<barCode;
        cout<<"\nname : "<<name;
        cout<<"\nprice : "<<price;
    }        

};

int main(){

Product p1;
p1.setBarCode (10001);
p1.setName ("Snack");

cout<<"Name : " << p1.getBarCode();
cout<<"\nName : " << p1.getName();
cout<<endl;

    return 0;
}