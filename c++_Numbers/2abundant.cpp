// 2 // check whether a given number is Abundant or not.
#include<iostream>
using namespace std;
int main()
{
    int num, i, sum=0;
    cout << "Enter a number :  ";
    cin >> num;
    for(i=1; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum > num)
    {
        cout << "\nThe sum of the divisor :  " << sum;
        cout << "\nTrue , " << num << " is a abundant number";
    }
    else 
    {
        cout << "\nThe sum of the divisor :  " << sum;
        cout << "\nFalse , " << num << " is not a abundant number";
    }
}