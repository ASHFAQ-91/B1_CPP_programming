// Bubble Sorting of array in the Ascending order.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter in an array :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(int i=0; i<x-1; i++)
    {
        for(int j=0, k=j+1; k<x; k++,j++)
        {
            if(arr[j] > arr[k])
            {
                arr[j] = arr[j] + arr[k];
                arr[k] = arr[j] - arr[k];
                arr[j] = arr[j] - arr[k];
            }
        }
        if(i==x-1)
        {
            cout << "Final output: ";
        }
        for(int l=0; l<x; l++)
        {
            cout << "\t" << arr[l];
        }
        cout << endl;
    }
}