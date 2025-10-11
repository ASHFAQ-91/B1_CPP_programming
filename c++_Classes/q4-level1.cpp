/* 4 // print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating -
        a class named 'Triangle' with the constructor having the three sides as its parameters. */
#include<iostream>
using namespace std;
class triangle;         //forward declaration       //in this program no need
class triangle          //triangle is a name of class
{
    int a,b,c;          //default as a private variables
    public:
    triangle (int s1, int s2, int s3)           //constructor
    {
        a = s1; 
        b = s2;
        c = s3;
    }
    public:
    void print_area();                          //function prototype
};
void triangle :: print_area()                   //function definition
{
        double area = (a+b+c)/2;
        cout << "The area of triangle " << area << endl;
        cout << "The perimeter of triangle " << (a+b+c);
}
int main()
{
    triangle t(3,4,5);                //t is a object of class triangle 
    t.print_area();                 //function call
}