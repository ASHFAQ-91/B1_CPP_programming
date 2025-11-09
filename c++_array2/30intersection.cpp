// take a common elements in the both array and print a number in the third array at one time.
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "How many value u will enter for 1st array :  ";
    cin >> x;
    int arr1[x];
    cout << "\nEnter value for the array 1st\n----------------------------------------------------\n";
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
    cout << "\nHow many value u will take for the 2nd array :  ";
    cin >> y;
    int arr2[y];
    cout << "\nEnter value for the array 2nd\n-----------------------------------------------------\n";
    for(int i=0; i<y; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr2[i];
    }
    for(int i=0; i<(y-1); i++)
    {
        for(int j=i+1; j<y; j++)
        {
            if(arr2[i]>arr2[j])
            {
            arr2[i] = arr2[i] + arr2[j];
            arr2[j] = arr2[i] - arr2[j];
            arr2[i] = arr2[i] - arr2[j];
            }
        }
    }
    int arr3[1], i=0,j=0,k=0;
    while(i!=x || j!=y)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            j++;
        }
        else if(arr1[i] == arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            j++;
            i++;
        }
    }
    for(int i=0; i<k; i++)
    {
        cout << "\t" << arr3[i];
    }
}