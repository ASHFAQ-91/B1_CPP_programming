// use the pointer in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    cout << arr[0] << endl;
    cout << *arr << endl << endl;       // legal

    // arr++;                           //  illegal
    // cout << *arr << endl;            //  illegal

    int *ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
}