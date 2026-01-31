// 13 // Convert the first letter of each word in the string to uppercase.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin , str);

    for(int i=0; i<str.size()-1; i++)
    {
        if(i == 0 && str[i] != ' ')
        {
            str[i] = toupper(str[i]);
        }
        else if(str[i] == ' ')
        {
            str[i+1] = toupper(str[i+1]);
        }
    }
    cout << endl << str << endl;
}