// 26 // check whether a number is a Duck number or not.
#include<iostream>
using namespace std;
int main()
{
    int num, cnum, flag=0;
    cout << "DUCK NUMBER or not\n--------------------------------------------------\n";
    cout << "Enter a number :  ";
    cin >> num;
    cnum = num;
    while(cnum > 0)
    {
        if(cnum % 10 == 0)
        {
            flag=1;
            break;
        }
        cnum /= 10;
    }
    if(cnum > 0 && flag==1)
    {
        cout << "\nDuck Number";
    }
    else
    {
        cout << "\nNot Duck Number";
    }
}