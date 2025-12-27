// 14 // first 10 LUCUS numbers.
#include<iostream>
using namespace std;
int main()
{
    int num, sum=0, pre=2, cur=1, nxt, i;
    cout << "LUCUS numbers\n---------------------------------------\n";
    cout << "how many value will print :  ";
    cin >> num;
    cout << "The first 10 Lucus numbers are :  \n";
    cout << pre << " " << cur << " ";
    for(i=3; i<=num; i++)
    {
        nxt = pre + cur;
        cout << nxt << " ";
        pre = cur;
        cur = nxt;
    }
}