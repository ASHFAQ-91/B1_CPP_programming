// print a string using getline . LIKE print full name
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter your name :  ";
    getline(cin , str);
    cout << str;
}