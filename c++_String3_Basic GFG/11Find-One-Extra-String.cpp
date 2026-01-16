// 13 // Find one Extra Character in a String.              // AWESOME
#include<iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "\nEnter a string :  ";
    getline(cin , str1);
    cout << "\nEnter a 2nd string :  ";
    getline(cin , str2);

    for(int i=0; i<str1.size(); i++)
    {
        for(int j=0; j<str2.size(); j++)
        {
            if(str1[i] == str2[j])
            {
                str2[j] = '0';
                break;
            }
        }
    }
    for(int i=0; 1; i++)
    {
        if(str2[i] != '0')
        {
            cout << endl << str2[i] << endl;
            break;
        }
    }
}