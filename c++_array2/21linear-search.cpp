// Search a number in an array and print the indexing of the array where it place also print work is -
// successful or not.
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout << "Enter value " << i+1 << " :  ";
        cin >> arr[i];
    }
    cout << "\nWhich number u want to search :  ";
    cin >> y;
    for(int i=0; i<x; i++)
    {
        if(y==arr[i])
        {
            cout << "\nPlaced at array indexing :  " << i;
            cout << "\n\nWork is Successful";
            goto gtot;
        }
        
    }
    if(1)
    {
        cout << "\n\nWork is Unsuccessful";
    }
    gtot : ;
}