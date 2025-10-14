// 10 // find the Smallest element missing in a sorted array.           ***able to a upload***
#include<iostream>
using namespace std;
int main()
{
    int num, i,j, count=0;
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
    count = arr[0];
    for(i=0; i<num; i++)
    {
        if(arr[i] != count)
        {
            cout << "The Smallest missing element is :  " << count;
            // goto gtot;
            break;
        }
        count++;
    }
    // gtot : ;
}