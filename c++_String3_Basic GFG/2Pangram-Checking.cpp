// 2 // Pangram Checking.                   // AWESOME
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a pangram :  ";
    getline(cin , str);

    int chr[26]={0}, flag=1;
    for(int i=0; i<str.size(); i++)
    {
        chr[str[i]-'a']++;   
    }
    for(int i=0; i<26; i++)
    {
        if(chr[i]==0)
        {
            flag = 0; 
            break;
        }
    }
    if(flag==0)
    {
        cout << "\n\"" << str << "\"" << endl << "is not a pangram";
    }
    else
    {
        cout << "\n\"" << str << "\"" << endl << "is a pangram";
    }
}