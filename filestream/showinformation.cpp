#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main()
{
    // crate file
    fstream register_project;
    // opening file name
    register_project.open("register.txt",ios::in);
    if(!register_project.is_open())
    {
        cout << "Error: Could not open register file." << endl;
        return 1;
    }
    cout<<left<<setw(20)<<"User Name"<<setw(20)<<"Password"<<endl;
    while(!register_project.eof())
    {
        char user[100], password[100];
        register_project>>user>>password;
        cout<<left<<"|"<<setw(20)<<user<<"|"<<
        setw(20)<<password<<"|"<<endl;
    }
    register_project.close();
    return 0;
}