// find duplicate numbers and print -1 on his place . count duplicate number that how many times they are repeated and print with his number.  //AWESOME
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
    int a=1, count=1, arr2[a], arr3[a];
    a=0;
    for(int i=0; i<x-1; i++)
    {
        if(arr1[i] == -1)
        {
            continue;
        }
        for(int j=i+1; j<x; j++)
        {
            if(arr1[i] == arr1[j])
            {
                arr1[j] = -1;
                arr2[a] = arr1[i];
                arr3[a] = count;
                count++;
            }
        }
        if(count > 1)
        {
            a++;
        }
        count=1;
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr1[i];
    }
    for(int i=0; i<a; i++)
    {
        if(i==0)
        {
            cout << endl;
        }
        if(arr3[i]>1)
        {
        cout << "\n\t" << "Number " << arr2[i] << " has " << arr3[i] << " duplicates";
        }
        else
        {
        cout << "\n\t" << "Number " << arr2[i] << " has " << arr3[i] << " duplicate";
        }
    }
}