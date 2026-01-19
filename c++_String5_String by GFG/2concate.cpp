// 2 // concate the two strings.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str1, str2;
    cout << "\nEnter 1st String :  ";
    getline(cin , str1);
    cout << "\nEnter 2nd String :  ";
    getline(cin, str2);

    // str1.append(str2);                      // option 1

    // cout << endl << str1 << endl;

    str1 = str1 + str2;                  // option 2
    cout << endl << str1 << endl; 
}