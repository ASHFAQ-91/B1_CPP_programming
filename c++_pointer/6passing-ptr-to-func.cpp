// passing pointer to function
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = 5, b = 10;
    int *aptr = &a, *bptr = &b;               // bptr = &b;

    swap(aptr, bptr);                       //  swap(*aptr, *bptr);
    cout << a << "\t" << b;
}