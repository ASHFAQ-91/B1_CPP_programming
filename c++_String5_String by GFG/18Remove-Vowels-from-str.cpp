// 18 // Remove the vowels from the string.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    int shift = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
           str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            shift++;
            str[i] = '\0';
            continue;
        }
        else if(str[i-shift] == '\0' || str[i] == ' ')
        {
            str[i - shift] = str[i];
            str[i] = '\0';
        }
    }
    cout << endl << str << endl;
}