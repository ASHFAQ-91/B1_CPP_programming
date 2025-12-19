// 12 // The sum of the series (1*1) + (2*2) + (3*3) + (4*4) + ........... + (n*n).
#include<iostream>
using namespace std;
int main()
{
    int n, a, sum=0, x;
    cout << "Print series till :  ";
    cin >> n;

    for(a=1; a<=n; a++)
    {
        x = a*a;
        cout << a << " * " << a << " = " << x << endl;
        sum = sum + x;
    }
    cout << "The sum of the above series is : " << sum;

return 0;
}