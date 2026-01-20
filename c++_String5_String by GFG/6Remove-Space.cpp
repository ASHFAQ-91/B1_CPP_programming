// 4 // Remove spaces between the string.               // AWESOME
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    for(int i=0; i<str.size()-1; i++)
    {
        for(int j=i+1; j<str.length(); j++)
        {
            if(str[i]==' ')
            {
                if(str[j] != ' ')
                {
                str[i] = str[j];
                str[j] = ' ';
                break;
                }
                continue;
            }
            break;
        }
    }
    cout << endl << str << endl;
}