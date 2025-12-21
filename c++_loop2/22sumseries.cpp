// 22 // display the sum of the seires [9 + 99 + 999 + 9999 + 99999 + .....n]
#include<iostream>
using namespace std;
int main()
{
    int num, a, sum=0, b=9, tsum=0;
    cout << "Input number of terms :  ";
    cin >> num;
    for(a=1; a<=num; a++)
    {
        sum = sum * 10 + 9;
        tsum = tsum + sum;
        cout << sum << "  ";
    }
    cout << endl << "The sum of the series :  " << tsum;
return 0;
}