// Insert a new value between the array.            //AWESOME
#include<iostream>
using namespace std;
int main()
{
    int x, i=0;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)                          //   taking value
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    for(int i=0; i<(x-1); i++)                      //    shorting array in ascending order
    {
        for(int j=i+1; j<x; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    char decision;
    int a;
    cout << "Do you want to insert a value in an array \"y for yes & n for no \" :  ";
    cin >> decision;
    if(decision == 'y')
    {
        cout << "\nHow many value u will enter in an array :  ";
        cin >> a;
        int arr2[a];
        for( i=0; i<a; i++)
        {
            cout << "Enter value " << x+i+1 << " :  ";
            cin >> arr2[i];
        }
        for(int i=0; i<a; i++)
        {
            for(int j=(x-1); j>=0; j--)
            {
                if(arr2[i]<arr[j])
                {
                    arr[j+1] = arr[j];
                    if(arr2[i]<arr[j] && j==0)
                    {
                        arr[j] = arr2[i];
                        break;
                    }
                    continue;
                }
                else if(arr2[i]>=arr[j])
                {
                    arr[j+1] = arr2[i];
                    break;
                }
            }
        x = x+1;
        }
    }
    else if(decision =='n')
    {
        for(int i=0; i<x; i++)
        {
            cout << "\t" << arr[i];   
        }
        goto gtot1;
    }
    else 
    {
        cout << "\nSorry but your input is not correct ";
        goto gtot1;
    }
    for(int i=0; i<x; i++)
    {
        cout << "\t" << arr[i];
    }
    gtot1 : ;
}