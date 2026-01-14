// 4 // Chick if a string is Pangrammatic Lipogram.             // AWESOME
#include<iostream> 
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a sentance :  ";
    getline(cin , str);

    int x[26] = {0}, count=0;

    for(int i=0; i<str.size(); i++)
    {
        x[str[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(x[i]!=0)
        {
            count++;
        }
        if((count + 1) <= i)
        {
            cout << "\n\"" << str << "\"" << "\tis not a pangram\n\n";
            break;
        }
        else if(i==25 && count==25 && x[18]==0)
        {
                cout << "\n\"" << str << "\"" << "\tis a Pangrammatic Lipogram\n";
        }
        else if(i==25 && count==26)
        {
            cout << "\n\"" << str << "\"" << "\tis a Pangram\n";
        }
    }
}