//
#include<iostream>
using namespace std;
int main()
{
    int num, a, flag=0;
    cout << "Enter a number :  ";
    cin >> num;

    for(a=1; a<=num; a++)
    {
        if(num % a == 0)
        {
            flag++;
        }
    }
    if(flag == 2)
    {
        cout << num << " is a Prime number";
    }
    else
    {
        cout << num << " is Not Prime number";
    }
return 0;
}