// 9 // Program to find the initials of a name.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter Your name :  ";
    getline(cin, str);
    
    for(int i=0; i<str.size(); i++)
    {
        if(i==0)
        {
            str[i] = toupper(str[i]);
            cout << str[i];
        }
        else if(str[i] == ' ')
        {
            str[i+1] = toupper(str[i+1]);
            cout << "\t" << str[i+1];
        }
    }
    cout << endl;
}