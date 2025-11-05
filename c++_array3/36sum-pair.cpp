// find the pair of numbers and the sum is equal to 10 (a+b = 10). // AWESOME
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
    int a;
    cout << "----------------------------------------------------------------------";
    cout << "\nWhat should be the sum of pair number :  ";
    cin >> a;
    for(int i=0; i<x-1; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if(arr[i] + arr[j] == a)
            {
                cout << "Sum of " << arr[i] << " + " << arr[j] << " = " << a << endl;
            }
        }
    }
return 0;
}