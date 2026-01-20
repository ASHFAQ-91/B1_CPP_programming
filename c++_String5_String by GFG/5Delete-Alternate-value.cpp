// 5 // Delete Alternate characters in a string.                //AWESOME
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    char temp;
    int Cspace=0, Mspace=0;
    for(int i=0; i<str.size()-1; i++)
    {
        if(str[i] == ' ')
        {
            Cspace++;
        }
        for(int j=i+1; j<str.size(); j++)
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
                    temp = str[j];
                    str[j] = str[i];
                    str[i] = temp;
                    break;
                }
                if(str[j]==' ')
                {
                    Cspace++;
                }
                continue;
            }
            break;
        }
        Cspace = 0;
    }
    cout << endl << str << endl << endl;
    int flag=1;
    for(int i=0; i<str.size(); i++)
    {
        if(flag==1)
        {
            cout << str[i];
            flag=0;
        }
        else if(flag==0)
        {
            flag=1;
        }
    }
}