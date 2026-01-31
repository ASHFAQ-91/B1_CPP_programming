// 14 // The strings S1, S2, S3 should have characters in same order as they appear in input.
#include<iostream>
using namespace std;
int main()
{
    string s, s1, s2, s3;
    cout << "Enter anything in a string :  ";
    getline(cin, s);

    for(int i=0; i<s.length(); i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            s1 = s1 + s[i];
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            s2 += s[i];
        }
        else
        {
            s3 += s[i];
        }
    }
    cout << endl << s1 << endl << s2 << endl << s3 << endl;
}