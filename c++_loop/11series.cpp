// 11 // Find the sum of the series 1 + 1/2^2 + 1/3^3 + ...... + 1/n^n.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, a; 
    float sum=0, x;
    cout << "Enter a number :  ";
    cin >> n;

    for(a=1; a<=n; a++)
    {
        x = 1 / pow(a,a);
        cout << "1 / " << a << " ^ " << a << " = " << x << endl ;
        sum += x;
    }
    cout << endl << "The Sum of above series is :  " << sum;

return 0;
}