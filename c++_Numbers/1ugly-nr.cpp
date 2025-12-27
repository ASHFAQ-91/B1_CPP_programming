// 1 // check whether a given number is an Ugly Number or not.
#include<iostream>
using namespace std;
int main()
{
    int num, x=0;
    cout << "Enter a number :  ";
    cin >> num;
    if(num <= 0)
    {
        cout << "Input a correct number ";
    }
    while(num != 1)
    {
        if(num % 2 == 0)
        {
            num = num / 2;
        }
        else if(num % 3 == 0)
        {
            num = num / 3;
        }
        else if(num % 5 == 0)
        {
            num /= 5;
        }
        else 
        {
            cout << "\nIt is not an Ugly number";
            x=1;
            break;
        }
    }
    if(x==0)
    {
        cout << "\nIt is an Ugly number";
    }
}