// 21 // Print the Decreasing pattern of the string.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    int dec = 0;
    for(int i=0; i<str.size(); i++)
    {
        cout << endl;
        for(int j=0; j<str.size()-dec; j++)
        {
            cout << str[j];
        }
        dec++;
    }
}
