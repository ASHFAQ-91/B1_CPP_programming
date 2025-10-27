// checking if an array is shorted or not .
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
    for(int i=0; i<(x-1); i++)
    {
        for(int j=(i+1); j<x; j++)
        {
            if(arr[i]<=arr[j] && i==(x-2))
            {
                cout << "\nArray is sorted ";
                break;
            }
            else if(arr[i]>arr[j])
            {
                cout << "\nArray is NOT sorted";
                goto gtot;
            }
        }
    }
    gtot : ;
}