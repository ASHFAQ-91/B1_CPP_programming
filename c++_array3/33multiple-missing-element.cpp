// print the MULTIPLE MISSING ELEMENT in an array.
#include<iostream>
using namespace std;
int main()
{
    int x,a=0;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(int i=0; i!=(x-1); i++)
    {
        if(arr[i] == arr[i+1]-1)
        {
            continue;
        }
        else if(arr[i] != arr[i+1]-1)
        {
            arr[i] = arr[i]+1;
            cout << arr[i] << "\t";
            i--;
        }
    }
}