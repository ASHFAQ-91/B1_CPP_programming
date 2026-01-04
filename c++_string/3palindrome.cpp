// check a string is PALINDROME or not.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "How many letter u will enter :  ";
    cin >> x;
    char arr[x+1];
    cout << "Enter a string :  ";
    cin >> arr;
    for(int i=0; i<x/2; i++)
    {
        if(arr[i] == arr[x-1-i] && i == x/2-1)
        {
            cout << "It is a palindrome";
        }
        else if (arr[i] != arr[x-1-i])
        {
            cout << "Is is not a Palindrome";
            break;
        }
    }
}