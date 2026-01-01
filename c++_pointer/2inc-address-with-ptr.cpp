// increase the address of the datatypes using pointer.         // good gor knowledge
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    ptr = &a;
    cout << ptr << endl;

    ptr++;
    cout << ptr;
}