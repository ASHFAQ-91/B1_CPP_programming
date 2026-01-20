// 4 // count the number of Camel Case characters in it.                  // AWESOME
#include<iostream>
using namespace std;
int main()
{
    string str; 
    cout << "\nEnter a string :  ";
    getline(cin , str);

    int Cspace = 0, Mspace=0;
    for(int i=0; i<str.size()-1; i++)
    {
        if(str[i] == ' ')
        {
            Cspace++;
        }
        for(int j=i+1; j<str.length(); j++)
        {
            if(str[i]==' ')
            {
                if(str[j]!=' ')
                {
                    if(Cspace > Mspace)
                    {
                        Mspace = Cspace;
                        str[j] = toupper(str[j]);
                    }
                    str[i] = str[j];
                    str[j] = ' ';
                    break;
                }
                if(str[j] == ' ')
                {
                    Cspace++;
                }
                continue;
            }
            break;
        }
        Cspace = 0;
    }
    cout << endl << str << endl;
}