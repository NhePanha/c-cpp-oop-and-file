#include<iostream>
#include<fstream>
#include<string.h>
#include<stdbool.h>
#include <algorithm>
#include <vector> // 
using namespace std;
//----------------------------------------------------------------
class Products {
    private:
        int id;
        char name[50];
        int qty;
        double price, amount;
    public:
        int getId() { 
            return id; 
        }
        char* getName() { 
            return name; 
        }
        void Write() {
            cout << "Enter ID: ";cin >> id;
            cout << "Enter Name: ";cin.ignore();
            cin.getline(name, 50);
            cout << "Enter Quantity: ";cin >> qty;
            cout << "Enter Price: ";cin >> price;
            amount = qty * price;
        }

        void Read()  {
            cout << setw(10) << id
                 << setw(20) << name
                 << setw(10) << qty
                 << setw(10) << price
                 << setw(10) << amount << endl;
        }
};
//----------------------------------------------------------------
fstream item;
int code;
string name;
int qty;
double price;
int i,j;

void Login()
{
    fstream projects;
    // new variables
    char email[100];
    char passswords[100];
    // old variables
    char username[100];
    char password[100];
    bool check = false;
    // open the file
    projects.open("projects.txt", ios::in);
    if(!projects.is_open())
    {
        cout << "Error opening the file" << endl;
    }
    cout<<"\t\t\t\t\t\t LOGIN SCREEN"<<endl;
    cout<<"\t\t\t\t_________________________________________"<<endl;
    cout<<"\t\t\t\t|Enter email      : ";cin >> email;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    cout<<"\t\t\t\t|Enter password   : ";cin >> passswords;
    cout<<"\t\t\t\t|________________________________________|"<<endl;
    while(projects >> username >> password)
    {
        if(strcmp(username,email) == 0)
        {
            if(strcmp(password, passswords) == 0)
            {
                //----------------------------------------------------------------
                cout << "Login successful!" << endl;
                Products pro;
                fstream file;
                int choice;
                do {
                    cout << "\nMenu:\n"
                        << "1. Write Product\n"
                        << "2. Read Products\n"
                        << "3. Search\n"
                        << "4. Update\n"
                        << "5. Delete\n"
                        << "6. Sort\n"
                        << "Enter your choice: ";
                    cin >> choice;

                    switch (choice) {
                        case 1:{
                            // Writing to file
                            file.open("products.bin",ios::app | ios::binary);
                            if (!file) {
                                cerr << "Error opening file for writing!" << endl;
                                //return 1;
                            }
                            pro.Write();
                            file.write((char*)&pro, sizeof(pro));
                            file.close();
                            cout << "Product saved successfully!" << endl;
                            break;
                        }break;
                        case 2:{
                            // Reading from file
                            file.open("products.bin", ios::in | ios::binary);
                            if (!file) {
                                cerr << "Error opening file for reading!" << endl;
                                //return 1;
                            }
                            cout << setw(10) << "ID"
                                << setw(20) << "Name"
                                << setw(10) << "Qty"
                                << setw(10) << "Price"
                                << setw(10) << "Amount" << endl;
                            while (file.read((char*)&pro, sizeof(pro))) {
                                pro.Read();
                            }
                            file.close();
                        }break;
                        case 3:{
                            int search_id;
                            bool check = false;
                            cout<<"Enter Search By ID : ";cin >> search_id;
                            file.open("products.bin", ios::in | ios::binary);
                            if (!file) {
                                cerr << "Error opening file for reading!" << endl;
                                //return 1;
                            }
                            while (file.read((char*)&pro, sizeof(pro))) {
                                if(pro.getId() == search_id){
                                    pro.Read();
                                    check = true;
                                    cout<<"Search Product Fuond!"<<endl;
                                    break;
                                }
                                if(check==false){
                                    cout<<"Search Product Not Fuond!"<<endl;
                                }
                            }
                        }break;
                        case 4:{
                            int update_id;
                            bool check = false;
                            cout<<"Enter Update By ID : ";cin >> update_id;
                            file.open("products.bin", ios::in | ios::out | ios::binary);
                            if (!file) {
                                cerr << "Error opening file for updating!" << endl;
                            }
                            while (file.read((char*)&pro, sizeof(pro))) {
                                if(pro.getId() == update_id){
                                    pro.Write();
                                    file.seekp(-sizeof(pro), ios::cur);
                                    file.write((char*)&pro, sizeof(pro));
                                    check = true;
                                    cout<<"Update Product Fuond!"<<endl;
                                    break;
                                }
                            }
                            if(check==false){
                                cout<<"Update Product Not Fuond!"<<endl;
                            }
                        }break;
                        case 5:{
                            fstream file;
                            fstream temp;
                            int deleteID;
                            file.open("products.bin", ios::in | ios::binary);
                            temp.open("temp.bin", ios::out | ios::binary);
                            if (!file.is_open() ||!temp.is_open()) {
                                cerr << "Error opening file for deleting!" << endl;
                            }
                            cout << "Enter the ID of the product to delete: ";
                            cin >> deleteID;
                            bool found = false;
                            // Read from original file and write to temp file, skipping the record to delete
                            while (file.read((char*)&pro, sizeof(pro))) {
                                if (pro.getId() == deleteID) {
                                    remove("products.bin");
                                    rename("temp.bin", "products.bin");
                                    cout << "Product deleted successfully." << endl;
                                    found = true;
                                    cout << "Deleting the following product:\n";
                                }
                            }
                            file.close();
                            temp.close();
                            if (!found) {
                                cout << "No product with ID " << deleteID << " found!" << endl;
                            } 
                        }break;
                        case 6: {
                            // Sorting by ID
                            bool check = false;
                            fstream file("products.bin", ios::in | ios::out | ios::binary);
                            if (!file.is_open()) {
                                cout << "Error: Couldn't open products.bin" << endl;
                                break;
                            }
                            Products arr[100], tempProduct;
                            int count = 0;

                            // Read all records into an array
                            while (file.read((char*)&arr[count], sizeof(Products))) {
                                count++;
                            }
                            file.close();
                            // Sort the array by ID
                            for (int i = 0; i < count; i++) {
                                for (int j = i + 1; j < count; j++) {
                                    if (arr[i].getId() > arr[j].getId()) {
                                        tempProduct = arr[i];
                                        arr[i] = arr[j];
                                        arr[j] = tempProduct;
                                        check = true;
                                    }
                                }
                            }
                            // Write sorted data back to a temporary file
                            fstream tempp("temp.bin", ios::out | ios::binary);
                            if (!tempp.is_open()) {
                                cout << "Error: Couldn't open temp.bin" << endl;
                                break;
                            }

                            for (int i = 0; i < count; i++) {
                                tempp.write((char*)&arr[i], sizeof(Products));
                            }
                            tempp.close();

                            // Replace the original file with the sorted file
                            remove("products.bin");
                            rename("temp.bin", "products.bin");
                            if(check==false)
                            {
                                cout << "No product found to sort!" << endl;
                            }
                            else
                            {
                                cout << "Product sorted successfully!" << endl;
                            }
                        } break;

                    }
                } while (choice != 0);
                //----------------------------------------------------
            }
            else
            {
                cout << "Incorrect password!" << endl;
            }
        }
    }
}
void Sign_up()
{
    fstream projects;
    char username[100];
    char password[100];
    char confirm[100];
    bool check = false;
    // open the file
    projects.open("projects.txt", ios::app);
    if(!projects.is_open())
    {
        cout << "Error opening the file" << endl;
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
        projects << username << " " << password << endl;
        cout << "Registration successful!" << endl;
        // close the filestream
        projects.close();
        check = true;
    }
    if(check==false)
    {
        cout << "Passwords do not match!" << endl;
    }
}

int main()
{
    int op;
    do{
        cout<<"[1 - SIGN UP] "<<endl;
        cout<<"[2 - LOGIN  ]  "<<endl;
        cout<<"[3 - EXIT   ]   "<<endl;
        cout<<"Enter your choice : ";
        cin>>op;
        switch(op){
            case 1:{
                Sign_up();
                break;
            }
            case 2:{
                Login();
                break;
            }
            case 3:{
                cout<<"Exiting..."<<endl;
                exit(0);
                //return 1;
                break;
            }
        }
    }while(op!=0);
    return 0;
}