// 23 // display the first n terms of Fibonacci series.
#include<iostream>
using namespace std;
int main()
{
    int num, pre=0, cur=1, nxt, a;
    cout << "Input number of terms to display :  ";
    cin >> num;
    cout << "\nHere is the Fibonacci series upto to 10 terms :  \n" << pre << "  " << cur << "  ";    
    for(a=1; a<=num-2; a++)
    {
        nxt = pre + cur;
        cout << nxt << "  ";
        pre = cur;
        cur = nxt;
    }
}