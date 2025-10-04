// 2 // Take two integer value from user and print greater amoung them
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter two values :  ";
    cin >> x >> y;
    
    if(x>y)
    {
        cout << endl << x << " is greater then " << y;
    }
    else if (y>x)
    {
        cout << endl << y << " is greater then " << x;
    }
    else
    {
        cout << endl << x << " and " << y << " Both are equal " ;
    }

return 0;
} 