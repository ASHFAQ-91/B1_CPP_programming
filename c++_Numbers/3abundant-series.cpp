// 3 // find the Abundant numbers (integers) between 1 to  n.
#include<iostream>
using namespace std;
int main()
{
    int num, i, j, sum=0;
    cout << "Abundant numbers till :  ";
    cin >> num;
    cout << "----------------------------------------------\n";
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum > i)
        {
        cout << i << " ";
        }
        sum = 0;
    }
}