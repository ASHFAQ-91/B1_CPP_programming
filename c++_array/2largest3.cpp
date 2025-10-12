// 2 // find the Largest three elements in an array.
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
            if(arr[j] < arr[i])
            {
                i = i*j;            //i = i+j;
                j = i/j;            //i = i-j;      
                i = i/j;            //i = i-j;
            }
        }
    }
    cout << arr[num-1]<< "  " << arr[num-2]<< "  " << arr[num-3];
}
