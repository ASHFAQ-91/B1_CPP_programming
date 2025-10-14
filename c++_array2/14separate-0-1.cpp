// 14 // Separate 0s and 1s from a given array of values 0 and 1.
#include<iostream>
using namespace std;
int main()
{
    int num, a=0, i;
    cout << "How many value u will enter :  ";
    cin >> num;
    int arr1[num] , arr2[num] = {0};
    for(i=0; i<num; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    for(i=0; i<num; i++)
    {
        if(arr1[i]==0)
        {
            arr2[a] = arr1[i];
            a++;
        }
    }
    for(i=0; i<num; i++)
    {
        if(arr1[i]==1)
        {
            arr2[a] = arr1[i];
            a++;
        }
    }
    cout << "\nSeparate 0 and 1 values :  \n";
    for(i=0; i<num; i++)
    {
        cout << arr2[i] << "   ";
    }
}