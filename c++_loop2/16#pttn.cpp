// 16 // Print a square pattern with # character.
#include<iostream>
using namespace std;
int main()
{
    int a, b, num;
    cout << "Input the number of characters for a side :  ";
    cin >> num;
    for(a=1; a<=num; a++)
    {
        for(b=1; b<=num; b++)
        {
            cout << "#  ";
        }
    cout << "\n";
    }
return 0;
}