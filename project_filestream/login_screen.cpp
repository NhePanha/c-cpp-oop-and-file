#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    // create filename
    fstream panha;
    // new variables
    char email[100];
    char passswords[100];
    // old variables
    char username[100];
    char password[100];
    bool check = false;
    // open the file
    panha.open("panha.txt", ios::in);
    if(!panha.is_open())
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    cout<<"\t\t\t\t\t\t LOGIN SCREEN"<<endl;
    cout<<"\t\t\t\t_________________________________________"<<endl;
    cout<<"\t\t\t\t|Enter email      : ";cin >> email;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    cout<<"\t\t\t\t|Enter password   : ";cin >> passswords;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    while(panha >> username >> password)
    {
        if(strcmp(username,email) == 0)
        {
            if(strcmp(password, passswords) == 0)
            {
                cout << "Login successful!" << endl;
                check = true;
                break;
                
            }
            else
            {
                cout << "Incorrect password!" << endl;
            }
        }
    }
    
    return 0;
}