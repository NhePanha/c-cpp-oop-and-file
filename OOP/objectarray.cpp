#include <iostream>
#include <string.h>
using namespace std;
class Employee{
    private: 
    //data members
        int code;
        char name[20];
        string gender;
        float salary;
    public:
    int getCode(){
        return code;
    }
    char * getName()
    {
        return name;
    }
    // var        
    // const
    // dynamic string long double 
    // final   
    // late    list arraylist map hastable hasmap
    // let
    //methods
        void Input()
        {
            cout << "Enter Code   : "; cin >> code;
            cout << "Enter Name   : "; cin >> name;
            cout << "Enter Gender : "; cin >> gender;
            cout << "Enter Salary : "; cin >> salary;
        }
        void display()
        {
            cout << "Code   : " << code << endl;
            cout << "Name   : " << name << endl;
            cout << "Gender : " << gender << endl;
            cout << "Salary : " << salary << endl;
        }
};
int main(){
    Employee objname[100];
    int i,n;
    int op;
    char status[30];
    do{
        cout<<"========================================"<<endl;
        cout<<"[1 - Input employee]"<<endl;
        cout<<"[2 - Output employee]"<<endl;
        cout<<"[3 - Search employee]"<<endl;
        cout<<"Please select items : ";cin>>op;
        switch(op)
        {
            case 1:{
                cout<<"Enter number of employees : ";cin>>n;
                for(i=0;i<n;i++){
                    cout<<"==============[000"<<i+1<<"]=============="<<endl;
                    objname[i].Input();
                }
            }break;
            case 2:{
                for(i=0;i<n;i++){
                    objname[i].display();
                }
            }break;
            case 3:{
                cout<<"Enter Employee Code : ";int code;cin>>code;
                for(i=0;i<n;i++){
                    if(objname[i].getCode() == code){
                        objname[i].display();
                        break;
                    }
                }
                if(i==n) cout<<"Employee not found..";
            }break;
            default:
                cout<<"Invalid option..";
        }
        cout<<"Enter Yes/No to continue...";cin>>status;
    }while(strcmp(status, "Yes")==0 || strcmp(status, "yes")==0);
    return 0;
}