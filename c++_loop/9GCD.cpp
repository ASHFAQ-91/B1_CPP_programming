// 9 // find the Greatest Common Divisor (GCD) of two number.
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, a, gcd;
    cout << "\n Find the Greatest Common Divisor of two number" << endl 
         << "-------------------------------------------------------\n" << endl ;
    cout << "Input number first :  ";
    cin >> num1;
    cout << "Input number Second :  ";
    cin >> num2;

    for(a=1; a <= num1 && a <= num2; a++)
    {
        if(num1 % a == 0 && num2 % a == 0)
        {
            gcd = a;
        }
    }
    cout << endl << gcd << " is the Greatest Common Divisor of " << num1 << " and " << num2;

return 0;
}