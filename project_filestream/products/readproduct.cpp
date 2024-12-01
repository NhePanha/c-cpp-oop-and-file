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
    store.open("product.txt",ios::in);

    if(!store.is_open())
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    // read file the product
    // while(store.eof())
    // {
    //     store>>id>>name>>qty>>price>>total;
    //     cout<<setw(12)<<id<<
    //     setw(12)<<name<<
    //     setw(12)<<qty<<
    //     setw(12)<<price<<
    //     setw(12)<<total<<endl;
    // }
    while(store>>id>>name>>qty>>price>>total){
        cout<<setw(12)<<id<<
        setw(12)<<name<<
        setw(12)<<price<<
        setw(12)<<total<<endl;
    }
    // close the file
    store.close();
    
    return 0;
}