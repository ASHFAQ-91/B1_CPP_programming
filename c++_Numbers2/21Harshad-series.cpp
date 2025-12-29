// find HARSHAD number between 1 to 100.
#include<iostream>
using namespace std;
int main()
{
    int num, ccat, i, rem, sum;
    cout << "HARSHAD number series\n------------------------------------------------\n";
    cout << "Print series till :  ";
    cin >> num;
    for(i=1; i<=num; i++)
    {
        ccat = i;
        sum =0;
        while(ccat != 0)
        {
            rem = ccat % 10;
            sum = sum + rem;
            ccat = ccat / 10;
        }
        if(i % sum == 0)
        {
            cout << i << " ";
        }
    }
}