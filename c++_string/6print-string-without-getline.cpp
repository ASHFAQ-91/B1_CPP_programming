// print a string with using getline.
#include<iostream>
using namespace std;
int main()
{
    // string str = "mohammed ashfaq qureshi";       // it print whole string with space
    string str;
    cout << "Enter your name :  ";
    cin >> str;                                 // it doesnot accept space
    cout << endl << str;
}