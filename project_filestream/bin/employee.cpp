#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // create the file
    fstream employee;
    // varaible employee
    int code;
    string name,gender;
    float salary;

    employee.open("employee.bin", ios::app|ios::binary);
    if (!employee.is_open()) {
        cout << "Error: Could not open the file." << endl;
        return 1;
    }
    cout << "Enter employee code  : ";cin >> code;
    cout << "Enter employee name  : ";cin >> name;
    cout << "Enter employee gender: ";cin >> gender;
    cout << "Enter employee salary: ";cin >> salary;
    // write employee data to file
    employee<<code<<"  "<<name<<" "<<gender<<" "<<salary<<endl;
    cout << "Employee added successfully!" << endl;
    employee.close();
    // read employee data from file
    employee.open("employee.bin", ios::in|ios::binary);
    if (!employee.is_open()) {
        cout << "Error: Could not open the file." << endl;
        return 1;
    }
    // read and display employee data from file
    while(employee>>code>>name>>gender>>salary)
    {
        cout<<code<<"  "<<name<<"  "<<gender<<"  "<<salary<<endl;
    }
    employee.close();
    return 0;
}