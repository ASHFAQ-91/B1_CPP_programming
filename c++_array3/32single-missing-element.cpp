// Find the SINGLE MISSING ELEMENT  in the sorted array.    //AWESOME
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter : ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(int i=0; i<x; i++)
    {
        if(arr[i] == arr[i+1]-1)
        {
            continue;
        }
        else if(arr[i] != arr[i+1]-1)
        {
            cout << "\n\t" << arr[i]+1;
            break;
        }
    }
} 