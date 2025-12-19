// 14 // find Maximum , Minimum , Average and Sum of ...n given number by user and result the process with -1.
#include<iostream>
using namespace std;
int main()
{
    int a=0;
    char ch = 2;
    float num, max, min, avg, sum=0;
    cout << " Enter a whole number or -1 to get result :  ";
    cin >> num;
    max = num;
    min = num;
    while(num == -1)
    {
        cout << endl << "OK, see you next time " << ch;
        goto gtot;
    }
    while(num != -1)
    {
        if(num != -1)
        {
            a++;
            sum = sum + num;
            if(num>max)
            {
                max = num;
            }
            else
            {
                if(num<min)
                {
                    min = num;
                }
            }
        }
        cout << "Enter a whole number or -1 to get result :  ";
        cin >> num;
    }
    avg = sum / a;
    cout << "\nMaximum number you enter :  " << max << endl;
    cout << "Minimum number you enter :  " << min << endl;
    cout << "Average number you enter :  " << avg << endl;
    cout << "Sum of all numbers you enter :  " << sum ;

    gtot: ;
}