// 7 // Program to check if input is an integer or a string.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin , str);

    for(int i=0; i<str.length(); i++)
    if(isdigit(str[i]))
    {
        cout << "integer";
        break;
    }
    else
    {
        cout << "String";
        break;
    }
}