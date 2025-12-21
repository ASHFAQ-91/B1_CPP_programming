// 21 // display the n terms of HARMONIC  series and their sum.
#include<iostream>
using namespace std;
int main()
{
    int num, a;
    float sum=0;
    cout << "How many harmonic nr. to print :  ";
    cin >> num;
    for(a=1; a<=num; a++)
    {
        sum = sum + 1.0 / a;
        cout << "1/" << a;
        if(a<num)
        {
            cout << " + ";
        }
    }
    cout << "\n\nThe sum of the series upto " << num << " terms :  " << sum;
}