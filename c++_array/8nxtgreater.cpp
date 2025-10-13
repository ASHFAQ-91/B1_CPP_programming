// 8 // find the next greater element of every element of a given array of integers.
#include <iostream>
using namespace std;
int main()
{
    int num, i, j, count=0;
    cout << "How many value u will enter :  ";
    cin >> num;
    int arr1[num];
    int arr2[num];
    for (i = 0; i < num; i++)
    {
        cout << "Enter value " << i + 1 << " :  ";  //get value from user
        cin >> arr1[i];
    }
    
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr1[i] < arr1[j])
            {   
                arr2[i] = arr1[i];      // transfer the value 
                arr1[i] = arr1[j];      // transfer the value
                goto gtot ;
            }
        }                                      
    gtot :  ;
    }
    for(i=0; i<num; i++)
    {
        if(arr2[i]>0)
        {
            count++;    // counting how much to print array size 
        }
    }
    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (arr2[i] > arr2[j])                      // ascending order of arr2[]
            {
                arr2[i] = arr2[i] + arr2[j];
                arr2[j] = arr2[i] - arr2[j];
                arr2[i] = arr2[i] - arr2[j];
            }
        }
    }

    for (i = 0; i < count; i++)
    {
       cout << arr2[i] << " :  " << arr1[i] << endl;            // print value 
    }
    return 0;
}