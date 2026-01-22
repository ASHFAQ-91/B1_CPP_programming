// 12 // Return true if sequence is Binary, else return false.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a Integers :  ";
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '1' || str[i] == '0')
        {
            if(i==str.size()-1)
            {
                cout << "\nSince string contains only 0 and 1, output is 1.";
            }
        }
        else 
        {
            cout << "\nSince string contains digits other than 0 and 1, output is 0.";
            break;
        }
    }
}