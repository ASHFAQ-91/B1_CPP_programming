// 15 // Generate and show the first 15 NARCISSISTIC  / ARMSTRONG decimal numbers.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, ci, counter=0, multi, i, j, rem, sum=0;
    cout << "NARCISSISTIC / ARMSTRONG numbers series\n-----------------------------------------\n";
    cout << "Print series till :  "; 
    cin >> num;

    for(i=1; i<=num; i++)
    {
        ci = i;
        counter = 0;
        sum = 0;
        while(ci != 0)
        {
        ci = ci / 10;
        counter++;
        }
        ci = i;
        for(j=1; j<=counter; j++)
        {
            rem = ci % 10;
            sum = sum + pow(rem, counter);
            ci = ci / 10;
        }
        if(sum == i)
        {
            cout << sum << " ";
        }
    }
}