// 7 // Write a program to print absolute value of a number entered by user.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number :  ";
    cin >> num;
    if(num<0)
    {
        num = num * -1;
    }
    cout << endl << "Absolute value is " << num;

return 0;
}