/* 2 // Assign and print the roll number , phone number and address of two students having names "Sam" -
        and "John" respectively by creating two objects of the class 'Student'.  */
// ERROR???
#include<iostream>
#include<string>
using namespace std;
class student                   // student is a class
{
    public:                 //public variables cannot be used in 'main' function
    int roll_no;
    string phone_no;
    string address;

    public:
    void get_value(void);               //function prototype
    void put_value(void);               //function prototype
};
void student :: get_value(void)             //'::' we called Scope Resolution   //function definition
{
    cout << "Enter roll no  : ";              
    cin >> roll_no;
    cout << "\nEnter phone_no  :  ";
    cin >> phone_no;
    cout << "\nEnter address  :  ";
    cin >> address;
}
void student :: put_value(void)             //function definition
{
    cout << endl << roll_no;
    cout << endl << phone_no;
    cout << endl << address;
}
int main()
{
    student sam, john;                      //'sam' is a class object
    cout << endl << "Sam\n";
    sam.get_value();                        //function call
    cout << endl << "John\n";
    john.get_value();                       //function call
    cout << endl << "Sam\n";
    sam.put_value();                        //function call
    cout << endl << "John\n";
    john.put_value();                       //function call

return 0;
}