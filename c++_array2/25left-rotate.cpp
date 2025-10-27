// Left rotate array value.
#include<iostream>
using namespace std;
int main()
{
    int x, temp;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    int lrotate, a;
    cout << "\nHow many times you want to rotate numbers :  ";
    cin >> lrotate;
    for(int i=0; i<lrotate; i++)
    { 
        a=0;
        for(int j=0; j<x; j++)
        {
            if(j==0)
            {
                temp = arr[j];
                continue;
            }
            else if(j==(x-1))
            {
                arr[a] = arr[j];
                arr[j] = temp;
                break;
            }
            arr[a] = arr[j];
            a++;
        }
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr[i];
    }
}