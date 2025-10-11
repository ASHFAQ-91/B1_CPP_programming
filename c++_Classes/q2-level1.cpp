/* 2 // Assign and print the roll number , phone number and address of two students having names "Sam" -
        and "John" respectively by creating two objects of the class 'Student'.  */
#include<iostream>
#include<string>
using namespace std; 
class Student
{
    public:
        int roll_no;
        int phone_no;
        string address;
};
int main()
{
    Student Sam, John;
    Sam.roll_no = 1;
    Sam.phone_no = 787711914;
    Sam.address = "sanjay nagar B";
    John.roll_no = 2;
    John.phone_no= 935823533;
    John.address = "sanjay nagar D";
    cout << endl << Sam.roll_no << endl << Sam.phone_no << endl << Sam.address << endl;
    cout << endl << John.roll_no << endl << John.phone_no << endl << John.address << endl;
}