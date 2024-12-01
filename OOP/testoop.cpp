// #include<iostream>
// using namespace std;
// // create new class 
// class Student{
//     private:
//         // block Data members
//         int id;
//         string name;
//         string gender;
//         float score;
//     public:
//     // block functions member
//         void Input()
//         {
//             cout << "Enter ID    : ";cin >> id;
//             cout << "Enter Name  : ";cin.ignore();getline(cin, name);
//             cout << "Enter Gender: ";cin >> gender;
//             cout << "Enter Score : ";cin >> score;
//         }
//         void Output(){
//             cout << "ID: " << id << endl;
//             cout << "Name: " << name << endl;
//             cout << "Gender: " << gender << endl;
//             cout << "Score: " << score << endl;
//         }
// };

// int main() {
//     // create object of Student class
//     Student stu;
//     stu.Input();
//     stu.Output();
//     return 0;
// }



// #include<iostream>

// using namespace std;
// // create class
// class Student{
//     private:
//     // block data members
//         int id;
//         string name;
//         string gender;
//         float score;
//     public:
//         void setID(int id){
//             // data member -> parameters
//             this->id = id;
//         }
//         void setName(string name){
//             this->name = name;
//         }
//         void setGender(string gender){
//             this->gender = gender;
//         }
//         void setScore(float score){
//             this->score = score;
//         }
//         int getID(){
//             return id;
//         }
//         string getName(){
//             return name;
//         }
//         string getGender(){
//             return gender;
//         }
//         float getScore(){
//             return score;
//         }
// };
// int main()
// {
//     // create object of Student class
//     Student stu;
//     int id;
//     string name,gender;
//     float score;

//     cout<<"Enter ID     : ";cin>>id;
//     cout<<"Enter Name   : ";cin.ignore();getline(cin,name);
//     cout<<"Enter Gender : ";cin>>gender;
//     cout<<"Enter Score  : ";cin>>score;

//     stu.setID(id);
//     stu.setName(name);
//     stu.setGender(gender);
//     stu.setScore(score);

//     cout<<"Student ID     : "<<stu.getID()<<endl;
//     cout<<"Student Name   : "<<stu.getName()<<endl;
//     cout<<"Student Gender : "<<stu.getGender()<<endl;
//     cout<<"Student Score  : "<<stu.getScore()<<endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;
// class Student{
//     private:   
//         int id;
//         string name;
//         string gender;
//         float score;
//     public:
//         // default constructor
//         Student()
//         {
//             id = 0;
//             name = "NULL";
//             gender = "NULL";
//             score = 0.0;
//         }
//         void Input()
//         {
//             cout<<"Enter ID     : ";cin >> id;
//             cout<<"Enter Name   : ";cin >> name;
//         }
//         void Ouptut(){
//             cout << "ID    : " << id << endl;
//             cout << "Name  : " << name << endl;
//             cout << "Gender: " << gender << endl;
//             cout << "Score : " << score << endl;
//         }
// };
// int main()
// {
//     Student stu1;// default constructor
//     stu1.Input();
//     stu1.Ouptut();
    
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;
// void Header()
// {
//     cout<<setw(20)<<"CODE"<<
//     setw(20)<<"NAME"<<
//     setw(20)<<"QTY"<<
//     setw(20)<<"PRICE"<<endl;
// }
// int main()
// {
//     // Storage
//     int 10 = 10;
//     int id[10] = {101,102,103,104,105,106,107,108,109,201};
//     string name[10] = {"Labubu", "Coca", "Spy", "Sting", "Vital", "Angkor", "Provida", "Rolex", "Hanuman","Coffe"};
//     int qty[10] = {22,23,24,25,26,27,99,20,66,20};
//     double price[10] = {10.5,20,30.5,12.5,33.3,99.9,30.6,49.5,49.9,88.8};
//     int newqty,i,op;
//     double total = 0;
//     do{
//         cout << "\nMenu:\n";
//         cout << "1. Show Item\n";
//         cout << "2. Buy Item\n";
//         cout << "3. Show Item\n";
//         cout << "4. Show Payment\n";
//         cout << "0. Exit\n";
//         cout<<"Please Choose Item : " ;cin>>op;
//         switch(op){
//             case 1:{
//                 Header();
//                 for(i=0;i<10;i++){
//                     cout<<setw(20)<<id[i]<<
//                     setw(20)<<name[i]<<
//                     setw(20)<<qty[i]<<
//                     setw(20)<<price[i]<<endl;
//                 }
//             }break;
//             case 2:{
//                 cout << "Enter ID of Item to buy : ";
//                 int idb; cin>>idb;
//                 for(i=0;i<10;i++){
//                     if(id[i]==idb){
//                         cout << "Enter Quantity to buy : ";
//                         cin>>newqty;
//                         if(qty[i]>=newqty){
//                             qty[i]-=newqty;
//                             total = total + (newqty * price[i]);
//                             cout << "Item Bought Successfully!\n";
//                         }else{
//                             cout << "Not enough quantity!\n";
//                         }
//                     }
//                 }
//             }break;
//             case 3:{
//             }break;
//             case 0:{
//             }break;
//             case 4:{
//                 cout<<"=========PAYMENTS=========="<<endl;
//                 cout<<"Total : "<<total<<endl;
//                 cout<<"Tax   : "<<endl;
//                 cout<<"Payment : "<<endl;
//                 cout<<"     Thanks You"<<endl;
//             }
//         }
//     }while(op!=0);

//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ITEMS = 100; // Max limit for items

void Header() {
    cout << setw(20) << "CODE"
         << setw(20) << "NAME"
         << setw(20) << "QTY"
         << setw(20) << "PRICE" << endl;
}

int main() {
    // Initial stock
    int id[MAX_ITEMS] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 201};
    string name[MAX_ITEMS] = {"Labubu", "Coca", "Spy", "Sting", "Vital", "Angkor", "Provida", "Rolex", "Hanuman", "Coffee"};
    int qty[MAX_ITEMS] = {22, 23, 24, 25, 26, 27, 99, 20, 66, 20};
    double price[MAX_ITEMS] = {10.5, 20, 30.5, 12.5, 33.3, 99.9, 30.6, 49.5, 49.9, 88.8};
    int itemCount = 10; // Current number of items
    int newqty, op;
    double total = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1. Show Items\n";
        cout << "2. Buy Item\n";
        cout << "3. Add New Item\n";
        cout << "4. Show Payment\n";
        cout << "0. Exit\n";
        cout << "Please Choose an Option: "; cin >> op;

        switch(op) {
            case 1: { // Show items
                Header();
                for (int i = 0; i < itemCount; i++) {
                    cout << setw(20) << id[i]
                         << setw(20) << name[i]
                         << setw(20) << qty[i]
                         << setw(20) << price[i] << endl;
                }
            } break;

            case 2: { // Buy item
                cout << "Enter ID of Item to Buy: ";
                int idb; cin >> idb;
                bool found = false;
                for (int i = 0; i < itemCount; i++) {
                    if (id[i] == idb) {
                        cout << "Enter Quantity to Buy: ";
                        cin >> newqty;
                        if (qty[i] >= newqty) {
                            qty[i] -= newqty;
                            total += newqty * price[i];
                            cout << "Item Bought Successfully!\n";
                        } else {
                            cout << "Not Enough Quantity!\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item ID not found!\n";
            } break;

            case 3: { // Add new item
                if (itemCount < MAX_ITEMS) {
                    cout << "Enter New Item Code: ";
                    cin >> id[itemCount];
                    cout << "Enter New Item Name: ";
                    cin >> ws; // Ignore any leading whitespace
                    getline(cin, name[itemCount]);
                    cout << "Enter Quantity: ";
                    cin >> qty[itemCount];
                    cout << "Enter Price: ";
                    cin >> price[itemCount];
                    itemCount++;
                    cout << "Item Added Successfully!\n";
                } else {
                    cout << "Stock is full! Cannot add more items.\n";
                }
            } break;

            case 4: { // Show payment summary
                cout << "========= PAYMENTS =========\n";
                cout << "Total: " << total << endl;
                double tax = total * 0.1;
                cout << "Tax: " << tax << endl;
                cout << "Total Payment: " << total + tax << endl;
                cout << "     Thank You\n";
            } break;

            case 0: {
                cout << "Exiting...\n";
            } break;

            default:
                cout << "Invalid Option! Please try again.\n";
        }
    } while (op != 0);

    return 0;
}
