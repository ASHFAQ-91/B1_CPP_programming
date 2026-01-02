// pointer to pointer
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr1 = &a;
    cout << *ptr1 << endl << endl;

    int **ptr2 = &ptr1;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;
}