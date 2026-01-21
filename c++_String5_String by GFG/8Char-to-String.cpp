// 8 // convert a list of characters into a String.         // AWESOME
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[] = {'a', 's', 'h', 'f', 'a', 'q', '\0'};               // without user

    string str;
    int x;
    x = strlen(ch);
    cout << x << endl;
    for(int i=0; i<x; i++)
    {
        str = str + ch[i];
    }
    cout << endl << str << endl;
    
    // char ch[30];                                         // with user
    // cout << "Enter ur name :  ";
    // cin >> ch;
    
    // string str;
    // for(int i=0; ch[i] != '\0'; i++)
    // {
    //     str += ch[i];
    // }
    // cout << endl << str << endl;
}