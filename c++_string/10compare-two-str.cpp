// compare two string that they are equal or not.
#include<iostream>
using namespace std;
int main()
{
    string s1 = "abc";
    string s2 = "abc";
    
    // if(!s1.compare(s2))              // 1st option
    if(s1 == s2)                        // 2nd option
    {
        cout << "strings are equal";
    }

}