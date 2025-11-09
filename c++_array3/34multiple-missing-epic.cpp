// print the MULTIPLE MISSING number with an array and also with in ascending order.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr1[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    for(int i=0; i<x-1; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(arr1[i] > arr1[j])
            {
                arr1[i] = arr1[i] + arr1[j];
                arr1[j] = arr1[i] - arr1[j];
                arr1[i] = arr1[i] - arr1[j];
            }
        }
    }
    int a = arr1[0], b = arr1[x-1];
    for(int i = a; i<=b; i++ , a++)
    {
        cout << "\t" << a;
    }
}