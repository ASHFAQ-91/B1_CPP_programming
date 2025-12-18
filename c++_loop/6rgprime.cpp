// 6 // Find PRIME number within a range.
#include<iostream>
using namespace std;
int main()
{
    int num, a, b, c=1, flag=0;
    cout << "Print Prime nr. till :  ";
    cin >> num;

    for(a=1; a<=num; a++)
    {
        flag = 0;
        c++;
        for(b=1; b<=c; b++)
        {
            if(c % b == 0)
            {
                flag++;
            }
        }
        if(flag == 2) {
            cout << c << "\t";
        }
    }
}