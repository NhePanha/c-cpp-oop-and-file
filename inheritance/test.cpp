// single inheritance
// #include <iostream>
// using namespace std;
// // create class bass
// class Mybass{
//     protected:
//         int a;
//         int b;
//         int c;
// };
// // create derived class derived
// class Myderived : public Mybass{
//     private:
//         int d;
//     public:
//     void Input()
//     {
//         cout<<"Enter A : ";cin>>a;
//         cout<<"Enter B : ";cin>>b;
//         cout<<"Enter C : ";cin>>c;
//         cout<<"Enter D : ";cin>>d;
//     }
//     void showData()
//     {
//         cout<<"A : "<<a<<endl;
//         cout<<"B : "<<b<<endl;
//         cout<<"C : "<<c<<endl;
//         cout<<"D : "<<d<<endl;
//     }
// };
// int main()
// {
//     Myderived obj;
//     obj.Input();
//     obj.showData();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // create class bass
// class Mybass{
//     protected:
//         int a;
//         int b;
// };
// // create class superclass
// class Mysup{
//     protected:
//         int x;
//         int y;
//     public:
// };
// // create derived
// class Myderived : public Mybass, protected Mysup{
//     private:
        
//     public:
//         void Input()
//         {
//             cout<<"Enter A : ";cin>>a;
//             cout<<"Enter B : ";cin>>b;
//             cout<<"Enter X : ";cin>>x;
//             cout<<"Enter Y : ";cin>>y;
//         }
//         void showData()
//         {
//             cout<<"A : "<<a<<endl;
//             cout<<"B : "<<b<<endl;
//             cout<<"X : "<<x<<endl;
//             cout<<"Y : "<<y<<endl;
//         }
// };
// int main()
// {
//     Myderived obj;
//     obj.Input();
//     obj.showData();
//     return 0;
// }

// incupslutions
// - private: ដំណើរការបានតែក្នុង class
// - protected: ដំណើរការបានតែក្នុង class និងក្រៅ class
// - public: block function member get set constructor ដំណើរការបានតែក្នុង class និងក្រៅ class
// - default:


// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Person{
//     protected:
//         int code;
//         string name;
//         string gender;
//         int age;
//     public:
//         void Input()
//         {
//             cout<<"Enter Code   : ";cin>>code;
//             cout<<"Enter Name   : ";cin>>name;
//             cout<<"Enter Gender : ";cin>>gender;
//             cout<<"Enter Age    : ";cin>>age;
//         }
//         void Display()
//         {
//             cout<<setw(12)<<code<<
//             setw(12)<<name<<
//             setw(12)<<gender<<
//             setw(12)<<age;
//         }
// };
// class Hospital{
//     protected:
//         int room;
//         int bedrooms;
//         string illness;
//     public:
//         void Input(){
//             cout<<"Enter Room     : ";cin>>room;
//             cout<<"Enter Bedrooms : ";cin>>bedrooms;
//             cout<<"Enter Illness  : ";cin>>illness;
//         }
//         void Output(){
//             cout<<setw(12)<<room<<
//             setw(12)<<bedrooms<<
//             setw(12)<<illness;
//         }
// };
// class Patern : public Person, public Hospital{
//     private:
//         int day,month,year;
//     public:
//         void Input()
//         {
//             Person::Input();
//             Hospital::Input();
//             cout<<"Enter Date (DD MM YYYY) : ";cin>>day>>month>>year;
//         }
//         void Output()
//         {
//             Person::Display();
//             Hospital::Output();
//             cout<<setw(12)<<day<<"/"<<month<<"/"<<year<<endl;
//         }
// };
// void Header()
// {
//     cout<<setw(12)<<"Code"<<
//     setw(12)<<"Name"<<
//     setw(12)<<"Gender"<<
//     setw(12)<<"Age"<<
//     setw(12)<<"Room"<<
//     setw(12)<<"Bedrooms"<<
//     setw(12)<<"Illness"<<
//     setw(12)<<"Date"<<endl;
//     cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
// }
// int main()
// {
//     Patern obj;
//     obj.Input();
//     Header();
//     obj.Output();
//     return 0;
// }


// #include <iostream>

// using namespace std;
// //create class bass
// class MyBass{
//     protected:
//         int a;
//         int b;
//         int c;
// };

// // create derived class derived
// class MyDerived : public MyBass{
//     private:
//         int d;
//     public:
//         void Input()
//         {
//             cout<<"Enter A : ";cin>>a;
//             cout<<"Enter B : ";cin>>b;
//             cout<<"Enter C : ";cin>>c;
//             cout<<"Enter D : ";cin>>d;
//         }
// };
// int main()
// {
//     MyDerived obj;
//     obj.Input();
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Person{
//     protected:
//         int code;
//         string name;
//         string gender;
//         string age;
//     public:
//         void Input();
//         void Display();
// };
// void Person::Input(){
//     cout<<"Enter Code   : ";cin>>code;
//     cout<<"Enter Name   : ";cin>>name;
//     cout<<"Enter Gender : ";cin>>gender;
//     cout<<"Enter Age    : ";cin>>age;
// }
// void Person::Display(){
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<gender<<
//     setw(12)<<age;
// }

// class Employee :public Person{
//     protected:
//         float salary;
//     public:
//         void Input();
//         void Display();
// };
// void Employee::Input(){
//     Person::Input();
//     cout<<"Enter Salary : ";cin>>salary;
// }
// void Employee::Display(){
//     Person::Display();
//     cout<<setw(12)<<salary<<endl;
// }

// class Student :public Person{
//     protected:
//         float sc1,sc2;
//     public:
//         void Input();
//         void Display();
// };
// void Student::Input(){
//     Person::Input();
//     cout<<"Enter Score 1 : ";cin>>sc1;
//     cout<<"Enter Score 2 : ";cin>>sc2;
// }
// void Student::Display(){
//     Person::Display();
//     cout<<setw(12)<<sc1<<
//     setw(12)<<sc2<<endl;
// }

// int main()
// {
//     //object 1
//     Employee employee;
//     //object 2
//     Student student;
//     employee.Input();
//     employee.Display();
//     cout<<"-----------------------"<<endl;
//     student.Input();
//     student.Display();

//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Info{
//     protected:
//         int code;
//         string name;
// }
// class Person : public Info{
//     protected:
//         string gender;
//         string age;
//     public:
//         void Input();
//         void Display();
// };
// void Person::Input(){
//     cout<<"Enter Code   : ";cin>>code;
//     cout<<"Enter Name   : ";cin>>name;
//     cout<<"Enter Gender : ";cin>>gender;
//     cout<<"Enter Age    : ";cin>>age;
// }
// void Person::Display(){
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<gender<<
//     setw(12)<<age;
// }

// class Employee :public Person{
//     protected:
//         float salary;
//     public:
//         void Input();
//         void Display();
// };
// void Employee::Input(){
//     Person::Input();
//     cout<<"Enter Salary : ";cin>>salary;
// }
// void Employee::Display(){
//     Person::Display();
//     cout<<setw(12)<<salary<<endl;
// }

// class Student :public Person{
//     protected:
//         float sc1,sc2;
//     public:
//         void Input();
//         void Display();
// };
// void Student::Input(){
//     Person::Input();
//     cout<<"Enter Score 1 : ";cin>>sc1;
//     cout<<"Enter Score 2 : ";cin>>sc2;
// }
// void Student::Display(){
//     Person::Display();
//     cout<<setw(12)<<sc1<<
//     setw(12)<<sc2<<endl;
// }

// int main()
// {
//     //object 1
//     Employee employee;
//     //object 2
//     Student student;
//     employee.Input();
//     employee.Display();
//     cout<<"-----------------------"<<endl;
//     student.Input();
//     student.Display();

//     return 0;
// }

// បញ្ចូលចំនួនវិនាទី seconds ​បន្ទាប់រក ម៉ោង នាទី និង វិនាទីដែលនៅសល់

// #include<iostream>
// #include<iomanip>
// #include<time.h>
// using namespace std;
// class Time{
//     private:
//         int seconds;
//         int h,m,s;
//     public:
//         void setSeconds() { 
//             // 5000 1h = 3600s 1m = 60s
//             cout << "Enter seconds: ";cin >> seconds;
//             h = seconds / 3600;
//             m = (seconds % 3600) / 60;
//             s = (seconds % 60) % 60;
//         }
//         void displayTime() { 
//             cout << h << ":" << m << ":" << s << endl;
//         }
// };
// int main()
// {
//     Time t;
//     t.setSeconds();
//     t.displayTime();
//     return 0;
// }

// 00:00:00

// #include <iostream>
// using namespace std;

// class Area{
//     private:
//         int heigth;
//         int width;
//     public:
//         Area()
//         {
//             heigth = 0;
//             width = 0;
//         }
//         Area(int h, int w)
//         {
//             this->heigth = h;
//             this->width = w;
//         }
//         Area(int h)
//         {
//             this->heigth=h;
//             this->width=0;
//         }
//         int getArea()
//         {
//             return heigth*width;
//         }
// };
// int main()
// {
//     Area area;
//     cout<<"Area : "<<area.getArea()<<endl;
//     Area area1(5, 6);
//     cout<<"Area : "<<area1.getArea()<<endl;
//     Area area2(7);
//     cout<<"Area : "<<area2.getArea()<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test1{
//     private:
//         int x;
//     public:
//         Test1()
//         {
//             x=0;
//         }
//         Test1(int x)
//         {
//             this->x=x;
//         }
//         void operator ++()
//         {
//             this->x++;
//         }
//         void operator --()
//         {
//             this->x--;
//         }
//         void display()
//         {
//             cout<<"Value : "<<x<<endl;
//         }
// };
// int main()
// {
//     Test1 t1(5);
//     t1.display();
//     ++t1;
//     t1.display();
//     --t1;
//     t1.display();
//     return 0;
// }

// #include <iostream>

// using namespace std;
// class Cat{
//     protected:
//         int a;
//         int b;
//         int c;
//     public:
//         void Input()
//         {
//             cout<<"Enter a value : ";cin>>a;
//             cout<<"Enter b value : ";cin>>b;
//         }
//         // void Display()
//         // {
//         //     cout<<"Value A : "<<a<<endl;
//         //     cout<<"Value B : "<<b<<endl;
//         // }
//         void Sum()
//         {
//             c  = a + b;
//             cout<<"Value C : "<<c<<endl;
//         }
// };
// class Dog : public Cat{
//     private:
//     public:
//         void Input()
//         {
//             Cat::Input();
//         }
//         // void Display()
//         // {
//         //     Cat::Display();
//         //     cout<<"Enter c value : ";cin>>c;
//         //     cout<<"Value C : "<<c<<endl;
//         // }
//         void Sum()
//         {
//             c = a * b;
//             cout<<"Value C : "<<c<<endl;
//         }
// };
// int main()
// {
//     Dog d;
//     d.Input();
//     d.Sum();
//     return 0;
// }
// int 
// long
// string 
// double 
// float 
// char 
// char []
// bool 

// const
// static 
// let 
// late 
// final 
// dynamic
// var 
// list 
// ArrayList 
// Map 



// #include <iostream>
// using namespace std;
// class Abstruct{
//     public:
//         virtual void Input(){};
//         virtual void Display(){};
// };
// class Person: public Abstruct{
//     private:
//         int id;
//         string name;
//         string gender;
//         double salary;
//     public:
//         void Input()
//         {
//             cout<<"Enter ID : ";cin>>id;
//             cout<<"Enter Name : ";cin>>name;
//             cout<<"Enter Gender : ";cin>>gender;
//             cout<<"Enter Salary : ";cin>>salary;
//         }
//         void Display(){
//             cout<<"ID : "<<id<<endl;
//             cout<<"Name : "<<name<<endl;
//             cout<<"Gender : "<<gender<<endl;
//             cout<<"Salary : "<<salary<<endl;
//         }
// };
// int main()
// {
//     Person per;
//     per.Input();
//     per.Display();

//     return 0;
// }



#include <iostream>
// pass by reference
using namespace std;
template<typename T>
T Sum(T a,T b)
{
    return a * b;
}
int main()
{
    int a = 5, b = 10;
    cout<<"Sum1 : "<<Sum(a,b)<<endl;

    double a1 = 2.4, b1 = 9.9;
    cout<<"Sum2 : "<<Sum(a1,b1)<<endl;

    short a2 = 3, b2 = 5;
    cout<<"Sum3 : "<<Sum(a2,b2)<<endl;

    return 0;
}
#include <iostream>

using namespace std;
template<typename T>
void Swap(T *a,T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
    cout<<"a = "<<*a<<" B = "<<*b<<endl;
    
}
int main()
{
    int a = 5, b = 10;
    cout<<"Before Swap : a = "<<a<<" b = "<<b<<endl;
    Swap(&a,&b);
    cout<<"After Swap : a = "<<a<<" b = "<<b<<endl;
    return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     int *ptr;
//     int a = 10;

//     ptr=&a;

//     cout<<"Value   : "<<&a<<endl;
//     cout<<"Pointer : "<<*ptr<<endl;
// }

#include <iostream>
// pass by value
using namespace std;
template<typename T>
void Swap(T a,T b)
{
    T temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<" B = "<<b<<endl;
    
}
int main()
{
    int a = 5, b = 10;
    cout<<"Before Swap : a = "<<a<<" b = "<<b<<endl;
    Swap(a,b);
    cout<<"After Swap : a = "<<a<<" b = "<<b<<endl;
    return 0;
}