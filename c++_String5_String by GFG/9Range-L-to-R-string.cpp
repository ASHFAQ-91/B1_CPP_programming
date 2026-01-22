// 9 // Print the characters in the range L to R of the string. 
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a String :  ";
    getline(cin, str);

    int Srange, Erange;
    cout << "\nEnter Starting from :  ";
    cin >> Srange;
    cout << "\nEnter Ending to :  ";
    cin >> Erange;
    if(Srange > Erange)
    {
        cout << "\nSORRY, ur Starting range is more then Ending range";
        goto gtot ;
    }
    for(int i=Srange; i <= Erange; i++)
    {
        if(i==Srange)
        {
            cout << endl;
        }
        cout << str[i];
    }
    gtot : ;
}