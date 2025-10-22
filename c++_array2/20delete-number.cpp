// Delete a number from an array. 
// Not COMPLETE
#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i = 0; i<x; i++)
    {
        cout << "\nEnter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    cout << "Which value u want to delete :  ";
    cin >> y;
    
    if(y<=5)
    {
        y--;
        for(int i=y; i<x; i++)
        {
            arr[i] = arr[i]+1;
        }
        for(int i=0; i<x-1; i++)
        {
            cout << arr[i] << "\t";
        }
    }
    else 
    {
        cout << "\nYour value number is donot exist";
    }
}