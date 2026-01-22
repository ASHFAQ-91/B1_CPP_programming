// 11 // Reverse only the vowels present in it and print the resulting string.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    char temp;
    int Lsize = str.size()-1;
    for(int i=0; i<str.length()-1; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
        {
            for(int j=Lsize; j>i; j--)
            {
                if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' ||
                   str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' )
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                    Lsize--;
                    break;
                }  
                Lsize--;             
            }
        }
    }
    cout << endl << str << endl;
}