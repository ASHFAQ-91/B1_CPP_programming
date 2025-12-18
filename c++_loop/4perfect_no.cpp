//
#include<iostream>
using namespace std;
int main()
{
    int num, sum=0, a,b;
    cout << "Enter a number :  ";
    cin >> num;

    for(a=1; a<=num; a++)
    {
        sum=0;
        for(b=1; b<=num; b++)
        {
            if(b < a)
            {
                if(a%b == 0)
                {
                    sum = sum + b;
                }
               
            }
        }
         if(sum == a)
                {
                    cout << sum << "\t";
                }
    // sum = 0;
    }
return 0;
}