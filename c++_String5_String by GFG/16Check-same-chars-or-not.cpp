// 16 // Check if all its characters are same or not.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a word :  ";
    cin >> str;

    int flag=1 , onetime=1;
    for(int i=1; i<str.size(); i++)
    {
        if(str[i] == str[i-1] && flag==1)
        {
            if(i==str.size()-1)
            {
                cout << "\nYES\nThe string contains only one character \'" << str[i] << "\'.";
            }
            continue;
        }
        else
        {
            flag=0;
            if(flag==0 && onetime==1)
            {
                cout << "\nNO\nThe string contains different character ";
                onetime=0;
                continue;
            }
            else if(flag==0 && onetime==0)
            {
                cout << "\'" << str[i] << "\'";
            }
        }
        if(i!=str.size()-1)
        {
            cout << ", ";
        }
        else
        {
            cout << ".";
        }
    }
}