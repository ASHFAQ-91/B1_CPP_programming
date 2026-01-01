// pointer will print the value of identifier.
#include<iostream>
using namespace std;
int main()
{
    int a=10, *aptr;
    aptr = &a;

    cout << a << endl;
    cout << *aptr << endl;

    cout << &a << endl;
    cout << aptr << endl;
}