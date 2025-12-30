// 28 // check whether two numbers are AMICABLE numbers or not.
#include<iostream>
using namespace std;
int main()
{
    int num, num2, sum=0, sum2=0;
    cout << "check whether two numbers are AMICABLE pairs or not";
    cout << "Sample: (220,284), (1184, 1210), (2620, 2924)..\n-------------------------------------------\n";
    cout << "Input 1st number :  ";
    cin >> num;
    cout << "Input 2nd number :  ";
    cin >> num2;
    for(int i=1; i<=num2; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    for(int j=1; j<=num2; j++)
    {
        if(num2 % j == 0)
        {
            sum2 += j;
        }
    }
    if(sum == sum2)
    {
        cout << "Amicable pair";
    }
    else
    {
        cout << "Not Amicable pair";
    }
}