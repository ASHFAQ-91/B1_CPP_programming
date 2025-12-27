// 6 // check whether a given number is Deficient or not.
#include<iostream>
using namespace std;
int main()
{
    int num, i, sum;
    cout << "Deficient number or not\n----------------------------------------------\n";
    cout << "Enter a number :  ";
    cin >> num;
    for(i=1; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum < num)
    {
        cout << endl << num << " is a deficient number";
    }
    else
    {
        cout << endl << num << " is Not deficient number"; 
    }
}