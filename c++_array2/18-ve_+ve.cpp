// 18 // move all negative elements of an array of integers to the end of the array without changing the order-
      // - of positive elemnts and negtive element.
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
    for(i=0; i<num; i++)
    {
        if(arr[i]>=0)
        {
            cout << arr[i] << "  ";
        }
    }
    for(i=0; i<num; i++)
    {
        if(arr[i]<0)
        {
            cout << arr[i] << "  ";
        }
    }
}