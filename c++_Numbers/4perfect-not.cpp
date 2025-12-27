// 4 // Check whether a given number is Perfect or not.
#include<iostream>
using namespace std;
int main()
{
    int num, i, sum=0;
    cout << "Perfect number or not\n--------------------------------------------------";
    cout << "\nEnter a number :  ";
    cin >> num;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
    {
        cout << num << " is a perfect number";
    }
    else
    {
        cout << num << " is not perfect number";
    }
}