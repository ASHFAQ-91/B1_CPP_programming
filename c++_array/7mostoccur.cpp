// 7 // find the Most Occurring element in an array of integers.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, tempcount = 1, count=1, popular;
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
            if(arr[i] == arr[j])
            {
                tempcount++;
            }
        }
        if(tempcount > count)
        {
            popular = arr[i];
        }
    tempcount = 1;
    }
    cout << "The most occurring value is :  " << popular;
}