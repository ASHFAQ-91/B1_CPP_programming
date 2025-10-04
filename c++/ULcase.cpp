// 11 // check uppercase or lowercase
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a single alphabet letter :  ";
    cin >> ch;
    
    if((ch>='A') && (ch<='Z'))
    {
        cout << ch << " is a UPPERCASE ";
    }
    else if((ch>='a') && (ch<='z'))
    {
        cout << ch << " is a LOWERCASE ";
    }
    else
    {
        cout << "Sorry ! but " << ch << " is not an alphabet letter";
    }
return 0;
}