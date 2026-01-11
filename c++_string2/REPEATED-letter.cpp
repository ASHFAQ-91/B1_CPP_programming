// maximum repeating letter in the array.                   // AWESOME
#include<iostream> 
using namespace std;
int main()
{
    string s = "Mohammed Ashfaq Qureshi";

    int freq[52] = {0};

    for(int i=0; i<s.size()*2; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            freq[s[i]-'A'] += 1;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            freq[s[i]-'a'+26]++;
        }
    }
    char ans;
    int maxF = 0;
    for(int i=0; i<52; i++)
    {
        if(freq[i] > maxF && i >= 26)
        {
            maxF = freq[i];
            ans = i + 'a' - 26;
        }
        else if(freq[i] > maxF && i <= 25)
        {
            maxF = freq[i];
            ans = i + 'A';
        }
    }
    cout << endl << maxF << "\t" << ans << endl << endl;
}