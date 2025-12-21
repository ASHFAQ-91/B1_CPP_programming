// 19 // display the n terms of odd natural number and their sum.
#include<iostream>
using namespace std;
int main()
{
    int num, a, b=1, sum=0; 
    cout << "How many odd number to print :  ";
    cin >> num;
    cout << "The odd numbers are :  " << endl;
    for(a=1; a<=num; a++)
    {
        sum = sum + b;
        cout << b << "\t";
        b = b+2;
    }
    cout << endl << "\nThe Sum of Odd Natural Numbers till 5 terms :  " << sum;
}