// 12 // rearrange the elements of a given array of integers in zig-zag fashion way.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, tcount=0;
    cout << "How many value u will enter :  ";
    cin >> num;
    int arr[num];
    for(i=0; i<num; i++)//taking value
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(i=0; i<num-1; i++)//ascending order
    {
        for(j=i+1; j<num; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    for(i=0; i<num-1; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(arr[i] < arr[j])
            {
                tcount++;
                if(tcount==2)
                {
                    arr[i+1] = arr[i+1] + arr[j];
                    arr[j]   = arr[i+1] - arr[j];
                    arr[i+1] = arr[i+1] - arr[j];
                    i++;
                    goto gtot;
                }
            }
        }
    gtot :  ;
    tcount = 0;
    }
    cout << "The Zig-Zag fashion of number :  \n";
    for(i=0; i<num; i++)
    {
        cout << arr[i] << "   ";
    }
}