#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a>b) && (a>c))
    {
        cout << "A is a greater number" << endl;
    }
    else if((b>a) && (b>c))
    {
        cout << "B is a greater number" << endl;
    }
    else
    {
        cout << "C = %d, C is a greater number" << endl;
    }
    return 0;
}