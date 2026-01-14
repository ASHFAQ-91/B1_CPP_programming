// 6 // Rearrange characters in a string such that no two adjacent are same.        // AWESOME
#include <iostream>
using namespace std;
int main()
{
    string str, str2;
    str2.clear();
    getline(cin, str);

    int x[26] = {0}, count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        x[str[i] - 'a']++;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0 || str[i] != str2[0] && x[str[i] - 'a'] != 0)
        {
            str2[0] = str[i];
            cout << str[i];
            x[str[i] - 'a']--;
            i = i - count;
            count = 0;
            continue;
        }
        else if (count == 0)
        {
            count = 2;
        }
        else if (count > 1)
        {
            count++;
        }
    }
}