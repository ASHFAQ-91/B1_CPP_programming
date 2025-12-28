// 18 // check whether a number is Disarium or not.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,cnum, i=1, rem, sum=0, counter=0;
    cout << "DISARIUM number or not\n---------------------------------------\n";
    cout << "Enter a number :  ";
    cin >> num;
    cnum = num;
    while(cnum != 0)
    {
        cnum /= 10;
        counter++;
    }
    cnum = num;
    for(; counter>=i; counter--)
    {
        rem = cnum % 10;
        sum = sum + pow(rem,counter);
        cnum = cnum / 10;
    }
    if(sum == num)
    {
        cout << num << " is a disarium number";
    }
    else
    {
        cout << num << " is Not a disarium number";
    }
}