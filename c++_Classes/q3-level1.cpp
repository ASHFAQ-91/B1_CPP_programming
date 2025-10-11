/* 3 // Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units -
     by creating a class named 'Triangle' with a function to print the area and perimeter. */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
class triangle
{
    public:
        int side1,side2,side3;
    
    void get(void);
    void area_f(void);
    void perimeter_f(void);
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void triangle :: get(void)
{
    cout << "Enter side1 value : ";
    cin >> side1;
    cout << "\nEnter side2 value :  ";
    cin >> side2;
    cout << "\nEnter side3 value :  ";
    cin >> side3;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void triangle :: area_f(void)
{
    // float semiperimeter = (side1 + side2 + side3) / 2;
    // float area = sqrt(semiperimeter *(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    double area = (side1+side2+side3)/2.0;
    cout << area << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void triangle :: perimeter_f(void)
{
    float perimeter = side1 + side2 + side3;
    cout << perimeter << endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    triangle a;
    a.get();
    a.area_f();
    a.perimeter_f();

return 0;
}