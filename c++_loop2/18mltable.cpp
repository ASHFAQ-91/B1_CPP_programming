// 18 // display the multiplication table vertically from 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int num, a, b, multi;
    cout << "Print table upto :  ";
    cin >> num;
    for(a=1; a<=num; a++)
    {
        for(b=1; b<=10; b++)
        {
            multi = a * b; 
            cout << a << " * " << b << " = " << multi << endl; 
        }
    cout << endl;
    }
}