#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // crate file
    fstream register_project;
    // opening file name
    register_project.open("register.txt",ios::app);
    if(!register_project.is_open()),
    {
        cout << "Error: Could not open register file." << endl;
        return 1;
    }
    char username[100], password[100],confirm[100];
    cout << "\t\t\t\tEnter Username   : "; cin >> username;
    cout << "\t\t\t\tEnter Password   : "; cin >> password;
    cout << "\t\t\t\tConfirm Password : "; cin >> confirm;
    // check if password and confirm password match
    if(strcmp(password, confirm)!=0)
    {
        cout << "Password and Confirm Password do not match." << endl;
        register_project.close();
        return 1;
    }
    // write username and password to the file
    register_project << username << " " << password << endl;
    cout << "Registration successful!" << endl;
    // close file
    register_project.close();
    return 0;
}