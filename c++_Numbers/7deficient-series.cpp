// 7 // find the DEFICIENT numbers (integers) between 1 to 100.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, sum=0, x=0;
    cout << "DEFICIENT NUMBERS SERIES\n--------------------------------------\n";
    cout << "Print Series till :  ";
    cin >> num;
    for(i=1; i<num; i++)
    {
        for(j=1; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum < i)
        {
            cout << i << "  ";
            x++;
        }
        sum = 0;
    }
}