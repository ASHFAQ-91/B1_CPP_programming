// 
#include<iostream>
using namespace std;
int main()
{
    int a=1, sum=0, num;
    cout << "Sum no. till :  ";
    cin >> num;
    for(; a<=num; a++)
    {
        sum = sum + a;
    }
    cout << endl << sum;

return 0;
}