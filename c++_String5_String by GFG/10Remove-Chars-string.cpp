// 10 // Remove characters from alphanumeric string.                // SUPER AWESOME
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    for(int i=0; i<str.size()-1; i++)
    {
        if(((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) || (str[i] == '\0'))
        {
            for(int j=i+1; j<str.size(); j++)
            {
                if(str[j] >= '0' && str[j] <= '9')
                {
                    str[i] = str[j];
                    str[j] = '\0';                                    
                    break;
                }
                else if(j==str.size()-1 && i==str.size()-2)
                {
                    str[j] = '\0';
                    str[i] = '\0';
                }
                else if((j==str.size()-1))
                {
                    str[i] = '\0';
                }
            }
        }
        else if(i==str.size()-2)
        {
            for(int j=i+1; j==str.size()-1 && ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z')); j++)
            {
                str[j] = '\0';
            }
        }
    }
    cout << endl << str << endl;
}