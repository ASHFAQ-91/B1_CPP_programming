// 17 // find the HAPPY number series from 1 to till given by user n value.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, i, j, rem, sum=0, ccat;
    cout << "HAPPY Number Series\n-------------------------------------------------\n";
    cout << "Print series till :  ";
    cin >> num;
    for(i=1; i<=num; i++)
    {
        ccat = i;
        for(j=1; j<=50; j++)
        {
            if(j != 1)
            {
                ccat = sum;
            }
            sum = 0;
            while(ccat != 0)
            {
                rem = ccat % 10;
                sum = sum + pow(rem,2);
                ccat = ccat / 10;
            }
            if(sum==1)
            {
                cout << i << " ";
                goto gtot;
            }
        }
        gtot : ;
    }
}