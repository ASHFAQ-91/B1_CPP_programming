// Search a number in an array and print the indexing of the array where it place also print work is -
// successful or not.
// 2) BINARY SEARCH
#include <iostream>
using namespace std;
int main()
{
    int i, x, y;
    cout << "How many value u will enter :  ";
    cin >> x;
    int arr[x];
    for (i = 0; i < x; i++)                 //taking value
    {
        cout << "Enter value " << i + 1 << " :  ";
        cin >> arr[i];
    }
    for (i = 0; i < x - 1; i++)         //rearrange ascending
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    int l = 0, h = x - 1, mid = (l + h) / 2, key;
    cout << "\nWhich number u want to find :  ";                //key
    cin >> key;
    // cout << "h = " << h << "    mid = " << mid;
    for (i = 0; i < x && l<=h; i++)
    {
        if (arr[mid] == key)
        {
            cout << "\nPlaced at array indixing :  " << mid;
            cout << "\nWork is Successful";
            break;
        }
        else if(key<arr[mid])
        {
            h = mid-1;
            if(key == arr[h])
            {
                cout << "\nPlaced at array indixing :  " << h;
                cout << "\nWork is Successful"; 
                break;
            }
        }
        else if(key>arr[mid])
        {
            l=mid+1;
            if(key == arr[l])
            {
                cout << "\nPlaced at array indixing :  " << l;
                cout << "\nWork is Successful"; 
                break;
            }
        }
        mid = (l+h)/2;
    }
        if(l>h)
        {
            cout << "\nWork is Unsuccessful";
        }
}