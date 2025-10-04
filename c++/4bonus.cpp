// 4 /* a company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//         Ask user for their salary and year of service and print the net bonus amount */
#include <iostream>
using namespace std;
int main()
{
    int year, salary, nsalary, bonus, sum = 0;
    cout << "Enter your per month salary :  ";
    cin >> salary;                                                              //similer scanf
    cout << endl << "How many years u worked in this company :  ";
    cin >> year;                                
    if (year >= 5)
    {
        bonus = 5 * salary / 100; //100/5
        nsalary = bonus + salary;
        cout << endl << "Your net salary = " << nsalary;                        //similer printf
    }
    else
    {
        cout << endl << "Your net salary = " << salary;
    }
    return 0;
}