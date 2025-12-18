// 8 // Find the Last Prime number occur before the entered number.
#include <iostream>
using namespace std;
int main()
{
    int num, flag = 0, a, b, c = 1, d;
    cout << "Enter a number :  ";
    cin >> num;

    for (a = 1; a <= num; a++)
    {
        flag = 0;
        c++;
        for (b = 1; b <= c; b++)
        {
            if (c % b == 0)
            {
                flag++;
            }
        } b--;
        if (flag == 2)
        {
            if (b < num)
            {
                d = b;
            }
        }
    }
    cout << endl << d << " is a Last Prime nr. occur before " << num;
}