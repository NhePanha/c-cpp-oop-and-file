#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // variable to store product details
    int id;
    string name;
    int qty;
    double price,total;
    // create file
    fstream store;
    // open file
    store.open("product.txt",ios::app);

    if(!store.is_open())
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    cout<<"Enter Product ID   : ";cin >> id;
    cout<<"Enter Product Name : ";cin >> name;
    cout<<"Enter Quantity     : ";cin >> qty;
    cout<<"Enter Price        : ";cin >> price;
    total = qty * price;
    // write product details to file
    store << id << " " << name << " " << qty << " " << price << " " << total << endl;
    cout << "Product added successfully!" << endl;
    // close the file
    store.close();

    return 0;
}