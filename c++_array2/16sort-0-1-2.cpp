// 16 // to Sort a given array of 0s, 1s and 2s. In the final array put all 0s first, 
//       then all 1s and all 2s in last.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j;
    cout << "How many value u will enter :  ";
    cin >> num;
    int arr[num];
    for(i=0; i<num; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(i=0; i<num-1; i++)
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
    cout << "\nSort of 0, 1, 2 numbers :  \n";
    for(i=0; i<num; i++)
    {
        cout << arr[i] << "  ";
    }
}  