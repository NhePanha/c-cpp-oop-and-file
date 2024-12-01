#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdbool.h>
using namespace std;

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

        void Read() const {
            cout << setw(10) << id
                 << setw(20) << name
                 << setw(10) << qty
                 << setw(10) << price
                 << setw(10) << amount << endl;
        }
};

int main() {
    Products pro;
    fstream file;
    int choice;

    do {
        cout << "\nMenu:\n"
             << "1. Write Product\n"
             << "2. Read Products\n"
             << "3. Search\n"
             << "4. Update\n"
             << "5. Sort\n"
             << "6. Delete\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:{
                // Writing to file
                file.open("products.bin",ios::app | ios::binary);
                if (!file) {
                    cerr << "Error opening file for writing!" << endl;
                    return 1;
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
                    return 1;
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
                    return 1;
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
                cout << "Exiting..." << endl;
            }
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}