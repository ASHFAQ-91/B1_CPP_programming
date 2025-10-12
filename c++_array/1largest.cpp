// 1 // Find the Largest element of a gven array of integers.
#include<iostream>
using namespace std;
int main()
{    
    int a=1,b=0, num, max;
    cout << "How many no. you want to enter :  ";
    cin >> num;
    int arr[num];
    cout << "\nEnter number " << a << " :  ";
    cin >> arr[b];
    max = arr[b];
    for(a=1; a<num; a++)
    {
        cout << "Enter number " << a+1 << " :  ";
        cin >> arr[a];
        if(arr[a] > max)
        {
            max = arr[a];
        }
    }
    cout << "The maximum number you enter :  " << max; 
}