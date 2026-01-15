// 10 // Check whether a number is Duck Number or not.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a number :  ";
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        if(str[0] == '0')
        {
            cout << "It is not a duck number";
            break;
        }
        else
        {
            cout << "\nIt is a duck number\n";
            break;
        }
    }
}