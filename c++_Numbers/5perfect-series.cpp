// 5 // find Perfect numbers and number of Perfect numbers between 1 to 1000.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, sum = 0, x=0;
    cout << "Perfect number series till\n----------------------------------------\n";
    cout << "Print series till :  ";
    cin >> num;
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == i)
        {
            cout << sum << "  ";
            x++;
        }
        sum = 0;
    }
    cout << "\nPerfect numbers between 1 to " << num << " is :  " << x;
}