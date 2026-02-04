// Convert a string Lower to Upper & Upper to Lower case.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper(str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << endl << str << endl;
}