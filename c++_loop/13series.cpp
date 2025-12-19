// 13 // To calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ......... + (1+2+3+4+....+n).
#include<iostream> 
using namespace std;
int main()
{
    int num, a,b, sum=0, tsum=0;
    cout << "Input a number :  ";
    cin >> num;

    for(a=1; a<=num; a++)
    {
        sum = 0;
        for(b=1; b<=a; b++)
        {
            sum = sum + b;
            tsum = tsum + b;
            cout << b;
            if(b < a)
            {
                cout << " + ";
            }
        }
        cout << " = " << sum << endl;
    }
    cout << " The sum of the above series is :  " << tsum;
}