// 15 // Rearrange a given sorted array of positive integers in the zig-zag form.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j;
    cout << "How many value u will enter :  ";
    cin >> num;
    int arr1[num], arr2[num] = {0};
    for(i=0; i<num; i++)//get value
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr1[i];
    }
    for(i=0; i<num-1; i++)//decending order
    {
        for(j=i+1; j<num; j++)
        {
            if(arr1[i]<arr1[j])
            {
                arr1[i] = arr1[i] + arr1[j];
                arr1[j] = arr1[i] - arr1[j];
                arr1[i] = arr1[i] - arr1[j];
            }
        }
    }
    int a=0, b = num-1, c = num / 2;
    if(num % 2 == 0)
    {
        for(i=0; i<c; i++)
        {
            cout << arr1[a] << "  ";
            a++;
            cout << arr1[b] << "  ";
            b--;
        }
    }
    else if(num % 2 != 0)
    {
        for(i=0; i<c; i++)
        {
            cout << arr1[a] << "  ";
            a++;
            cout << arr1[b] << "  ";
            b--;
        }
        cout << arr1[c];
    }
return 0;
}