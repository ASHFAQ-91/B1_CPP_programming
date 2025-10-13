// 6 // find all elements in array of integers which have at-least two greater elements.
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
            if(arr[i]<arr[j])
            {
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
        }
    }
    for(i=2; i<num; i++)
    {
        cout << arr[i] << "  ";
    }
}