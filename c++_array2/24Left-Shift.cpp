// Left Shift of Array
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
    int lshift;
    cout << "\nHow many times u want to shift :  ";
    cin >> lshift;
    int a=0;
    for(int i=0; i<lshift; i++)
    {
        a=0;
        for(int j=0; j<x; j++)
        {
            // cout << endl << j << endl;
            if(j==0)
            {
                arr[j] =0;
                continue;
            }
            else if(j==(x-1))
            {
                arr[a] = arr[j];
                arr[j] = 0;
                x--;
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