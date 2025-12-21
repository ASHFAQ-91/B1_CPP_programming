// 24 // find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include<iostream>
using namespace std;
int main()
{
    int a=100, b=200, sum=0;
    cout << "Numbers between 100 and 200, divisible by 9 :  ";
    cout << "\n------------------------------------------------\n\n";
    for(a=100; a<=b; a++)
    {
        if(a % 9 == 0 )
        {
            cout << a << "  ";
            sum = sum + a;
        }
    }
    cout << "\nThe sum :  " << sum;
}