// 19 // Replace all the alphabets with alphabets occuring at the same postion.
// 23 // Program to print reciprocal of letters.
      //   LIKE: 'a' would be replaced by 'z' , 'b' by 'y' , 'c' by 'x'.        // AWESOME
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    char sub;
    int Cadd = 0;
    for(int i=0; i<str.size(); i++)
    {
        Cadd = 0;
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            sub = str[i];
            while(sub != 'A')
            {
                Cadd++;
                sub = sub - 1;
            }
            str[i] = 'Z' - Cadd;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            sub = str[i];
            while(sub != 'a')
            {
                Cadd++;
                sub = sub - 1;
            }
            str[i] = 'z' - Cadd;
        }
    }
    cout << endl << str << endl;
}