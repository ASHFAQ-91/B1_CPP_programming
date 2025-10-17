// 19 // find a number which occurs odd number of times of a given aray of positive integers.
// NOT COMPLETE
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, repeat=1, mrepeat=0;
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
            if(arr[i]==arr[j])
            {
                repeat++;
            }
            if(repeat > mrepeat)
            {
                
            }
        }
    }

}