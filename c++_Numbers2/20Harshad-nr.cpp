// 20 // Check if a number is Harshad Number or not.
#include<iostream>
using namespace std;
int main()
{
    int num, rem, cnum, sum=0;
    cout << "HARSHAD number or not\n--------------------------------------------\n";
    cout << "Enter number :  ";
    cin >> num;
    cnum = num;
    while(cnum != 0)
    {
        rem = cnum % 10;
        sum = sum + rem;
        cnum = cnum / 10;
    }
    if(num % sum == 0)
    {
        cout << num << " is a HARSHAD number";
    }
    else
    {
        cout << num << " is Not Harshad number";
    }
}