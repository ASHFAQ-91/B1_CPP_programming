// 9 // sort a given unsorted array of integers, in WAVE Form. User Input  : 4 5 9 12 9 22 25 7
//                                                                  Output : 5 4 9 7 12 9 45 22
#include<iostream>
using namespace std;
int main()
{
    int i, j, num;
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
            if(arr[i]> arr[j])
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
            if(arr[i]<arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
                i++;
                goto gtot;
            }
        }
    gtot :  ;
    }
    cout << "\nWave form of the said array : \n";
    for(i=0; i<num; i++)
    {
        cout << arr[i] << "  ";
    }
}