// 1 // The task is to convert characters of string to lowercase.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin , str);
    
    // for(int i=0; i<str.size(); i++)         // option 1
    // {
        // str[i] = tolower(str[i]);
    // }
    // cout << endl << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);          // option 2

    cout << endl << str << endl;
}