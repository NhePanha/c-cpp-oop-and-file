#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    // create filename
    fstream panha;
    char username[100];
    char password[100];
    char confirm[100];
    bool check = false;
    // open the file
    panha.open("panha.txt", ios::out);
    if(!panha.is_open())
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    cout<<"\t\t\t\t\t\t SIGUP SCREEN"<<endl;
    cout<<"\t\t\t\t_________________________________________"<<endl;
    cout<<"\t\t\t\t|Enter username   : ";cin >> username;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    cout<<"\t\t\t\t|Enter password   : ";cin >> password;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    cout<<"\t\t\t\t|Confirm password : ";cin >> confirm;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    if(strcmp(password,confirm)==0)
    {
        // write data to filestream
        panha << username << " " << password << endl;
        cout << "Registration successful!" << endl;
        // close the filestream
        panha.close();
        check = true;
    }
    if(check==false)
    {
        cout << "Passwords do not match!" << endl;
    }
    return 0;
}