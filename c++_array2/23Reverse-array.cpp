// Reverse an array.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(int i=0; i<x; i++)
    {
        if(i==0)
        {
            cout << endl << endl;
        }
        cout << "\t" << arr[i];
    }
    int j = x-1;
    for(int i=0; i<(x/2); i++)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        j--;
    }
    for(int i=0; i<x; i++)
    {
        if(i==0)
        {
            cout << "\n\n";
        }
        cout << "\t" << arr[i];
    }
}