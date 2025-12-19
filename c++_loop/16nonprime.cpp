// 15 // List non-prime numbers from 1 to an upperbound.
#include<iostream>
using namespace std;
int main()
{
    int num, a, b, flag=0;
    cout << "Input the upper limit :  ";
    cin >> num;
    cout << endl << "The non-prime numbers are :  " << endl;
    for(a=1; a<=num; a++)
    {   
        flag=0;
        for(b=1; b<=a; b++)
        {
            if(a % b == 0)
            {
                flag++;
            }
        }
        if(flag!=2 && a != 1)
        {
            cout << a << "\t";
        }
    }
return 0;
}