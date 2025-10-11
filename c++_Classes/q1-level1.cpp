/* 1 // Create a class named 'Student' with a string variable 'name' and an inteer variable 'roll_no'. -
        Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class -
        Studnet */
#include<iostream>
#include<string>
using namespace std;
class Student           //class 
{
    public:
        string name;    //method
        int roll_no;    //method
};
int main()          
{
    Student s;              //s is a 'object'.
    s.name = "john";
    cout << s.name << endl;
    s.roll_no = 2;
    cout << s.roll_no << endl;
}
