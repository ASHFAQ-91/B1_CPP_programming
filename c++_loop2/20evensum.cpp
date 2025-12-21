// 20 // display the n terms of even natural number and their sum.
#include<iostream>
using namespace std;
int main()
{
    int num, a, b=2, sum=0;
    cout << "How many Even number to print :  ";
    cin >> num;
    cout << "\nThe Even numbers are : \n";
    for(a=1; a<=num; a++)
    {
        sum = sum + b;
        cout << b << "\t";
        b = b+2;
    }
    cout << "\n\nThe Sum of Even Natural Numbers till " << num << " terms :  " << sum;
}