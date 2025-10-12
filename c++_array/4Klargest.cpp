// 4 // find K Largest elements in a given array of integers.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, prt;
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
            if(arr[i] < arr[j])
            {
                arr[i] = arr[i] * arr[j];
                arr[j] = arr[i] / arr[j];
                arr[i] = arr[i] / arr[j];
            }
        }
    }
    cout << "how many largest value u want to print :  ";
    cin >> prt;
    for(i=0; i<prt; i++)
    {
        cout << arr[i] << "  ";
    }
}