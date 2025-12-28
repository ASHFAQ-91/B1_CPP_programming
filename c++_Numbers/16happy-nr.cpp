// 16 // check a number is a HAPPY or not.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, cnum, i, sum=0, rem;
    cout << "HAPPY number or not\n----------------------------------------\n";
    cout << "Enter a number :  ";
    cin >> num;
    sum = num;
    for(i=1; i<=50; i++)
    {
        cnum = sum;
        sum =0;
        while(cnum != 0)
        {
            rem = cnum % 10;
            sum = sum + pow(rem, 2);
            cnum = cnum / 10;
        }
        if(sum == 1)
        {
            cout << num << " is a happy number";
            break;
        }
    }
    if(sum != 1)
    {
        cout << num << " is a Unhappy number";
    }
}