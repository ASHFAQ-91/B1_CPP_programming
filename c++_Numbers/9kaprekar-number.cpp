// 9 // check whether a given number is a KAPREKAR number or not.
// ERROR ERROR ERROR ERROR -------- LINE 15 TO 22.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, ccat, counter=0, multi, rem = 0, sum = 0;
    cout << "KAPREKAR number or not\n---------------------------------------------\n";
    cout << "Enter a value :  ";
    cin >> num;
    multi = pow(num,2);
    ccat = multi;
    cout << ccat;
    { while(ccat != 0 )
        {
            ccat = num / 10;
            counter = counter + 1;
        }
        counter = counter / 2;
        ccat = 0;
        ccat = pow(10,2);                        //ccat change value
        while(multi != 0)
        {
            rem = multi % ccat;
            sum = sum + rem;
            multi = multi / ccat;
        }
    }
    {   if(sum == num)
        {
            cout << num << " is a KARPREKAR number ";
        }
        else
        {
            cout << num << " is not KARPREKAR number ";
        }
    }
return 0;
}