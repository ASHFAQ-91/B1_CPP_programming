// 17 // Extract all the intergers from s.
#include<iostream>
using namespace std;
int main()
{
    string str, str2;
    cout << "\nEnter anything in a string :  ";
    getline(cin, str);
    cout << endl;

    int toggle = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            toggle = 1;
            cout << str[i] ;
            str2 = str2 + str[i];
            if(str[i+1] >= '0' && str[i+1] <= '9')
            {
                continue;
            }
            str2 += ", "; 
            str[i+1] = ' ';
            cout << str[i+1];
        }
    }
    if(toggle == 1)
    {
        cout << "\n\nEXPLANATION:\n" << str2 << "are the integers present in s.\n\n";
    }
    else 
    {
        cout << "No integers present in the string.\n" << endl;
    }
}