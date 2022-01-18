#include<iostream>
using namespace std;

void initializeItemData(){
    int barCode[4];
    string name[4];
    float price[4];
    for (int i = 0; i < 4; i++)
   {
      cout<<"\nEnter barcode : ";
       cin>>barCode[i];
       cin.ignore();
 
       cout<<"\nEnter item name : ";
       getline (cin,name[i]);
      
       cout<<"\nEnter item price : ";
       cin>>price[i];
 
       cout<<endl;
   }
    
}

void displayItemData(){
    cout<<"_____________________ All Item List ______________________\n";
    cout<<endl;
    int barCode[4];
    string name[4];
    float price[4];
    

 
   for (int i = 0; i < 4; i++)
   {
       cout<<"Item Name : "<<name[i]<<"\n";
       cout<<"Item barCode : "<<barCode[i]<<"\n";
       cout<<"Item price : "<<price[i]<<"\n";
       cout<<endl;
   }
}

void searchItemByCode(){
    cout<<endl;
    int barCode[4];
    string name[4];
    float price[4];
    int searchBarcode;
    bool found=0;
    int foundIndex = -1;
    find : cout<<"Enter search barCode : ";
    cin>>searchBarcode;
    cout<<endl;
    
    for (int i = 0; i < 4; i++)
    {
        if(searchBarcode == barCode[i]){
            found=1;
            foundIndex= i;
            break;
        }
    }
    
    if(found == 0)
    {
        cout<<"search barCode "<<searchBarcode<<" is not found!\n"<<endl;
        goto find;
    }
    else{
        cout<<"searchBarcode "<<searchBarcode<<"'s info\n";
        cout<<endl;
        cout<<"Item Name : "<<name[foundIndex];
        cout<<"\nItem barcode : "<<barCode[foundIndex];
        cout<<"\nItem price : "<<price[foundIndex];
        cout<<endl;
    }
}

int main(){
    
    initializeItemData();

    displayItemData();


    searchItemByCode();
}