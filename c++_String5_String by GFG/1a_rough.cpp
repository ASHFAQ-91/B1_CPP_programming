#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ab = 'C', count=0;
    while(ab != 'A')
    {
        ab = ab - 1;
        count++;
    }
    cout << ab << endl << count;
}