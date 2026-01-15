// 8 // uick way to check if all the characters of a string are same.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a word :  ";
    getline(cin , str);
    
    int flag=1;
    for(int i=1; i<str.size(); i++)
    {
        if(str[i]!=str[i-1])
        {
            flag = 0;
            break;
        }
    }
    if(flag==0)
    {
        cout << "\"" << str << "\"" << "\n\nNot same the all character\n";
    }
    else
    {
        cout << "\"" << str << "\"" << "\n\nAll character are same\n";
    }
}