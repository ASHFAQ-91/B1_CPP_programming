// 7 // Find the factorial of a number.
#include<iostream>
using namespace std;
int main()
{
    int num, sum=1, a;
    cout << "Enter a number :  ";
    cin >> num;

    for(a=1; a<=num; a++)
    {
        sum = sum * a;
    }
    cout << endl << sum << " is a Factorial of number " << num;

return 0;
}