// check a identifier is empty is not.
#include<iostream>
using namespace std;
int main()
{
    string s1 = "masq";
    cout << s1 << endl;

    s1.clear();

    if(s1.empty())
    {
        cout << "The string is empty ";
    }
    else
    {
        cout << "The string is not empty";
    }
}