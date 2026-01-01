// different types to print pointer  value and address in c++
#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int *ptr;
    ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;

    int b = 20;
    int *ptr2;
    *ptr2 = b;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
}