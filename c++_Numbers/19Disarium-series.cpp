// find DISARIUM number between 1 to 1000.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, ccat, i, rem, sum=0, counter=0;
    cout << "DISARIUM number series\n------------------------------------------\n";
    cout << "Print series till :  ";
    cin >> num;
    for(i=1; i<=num; i++)
    {
        ccat = i;
        while(ccat != 0)
        {
            ccat = ccat / 10;
            counter++;
        }
        ccat = i;
        sum = 0;
        for(; counter>=1; counter--)
        {
            rem = ccat % 10;
            sum = sum + pow(rem,counter);
            ccat = ccat / 10;
        }
        if(sum == i)
        {
            cout << i << " ";
        }
    } 
}