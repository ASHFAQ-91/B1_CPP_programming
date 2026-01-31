// 15 // Write a programt o count the occurrence of Lowercase, Uppercase, Special, Numeric Characters.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter anything in a string :  ";
    getline(cin, str);

    int LowC=0, UppC=0, SpeC=0, NumC=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            UppC++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            LowC++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            NumC++;
        }
        else 
        {
            SpeC++;
        }
    }
    cout << "\nThere are " << UppC <<" uppercase characers,\n";
    cout << LowC << " lowercase characters,\n" << NumC << " numeric charaters,\n";
    cout << SpeC << " special characters.\n";
}