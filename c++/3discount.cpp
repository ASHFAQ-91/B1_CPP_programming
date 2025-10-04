// 3 // give DISCOUNT 10% when cost is greater then 1000
// one unit will cost 100
#include <iostream>
using namespace std;
int main()
{
    int a, b = 100, c, d, e;
    cout << " one unit price is 100 " << endl;
    cout << " Enter quentity  :  ";
    cin >> a;
    c = a * b;
    if (c >= 1000)
    {
        d = c / 10;
        cout << endl << "You got discount =  " << d << endl ;
        e = c - d;
        cout << endl << "Paying amount =  " << e << endl;
    }
    else
    {
        cout << endl << "paying amount = " << c << endl;
    }
    return 0;
}