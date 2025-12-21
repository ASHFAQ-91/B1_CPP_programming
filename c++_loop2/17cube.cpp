// 17 // display the CUBE of the number upto given a n integer.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, a, cube;
    cout << "Input the number of terms :  ";
    cin >> num;
    for(a=1; a<=num; a++)
    {
        cube = pow(a , 3);
        cout << "Number is : " << a << " and the cube of " <<  a << " is :  ";
        cout << cube << endl ;
    }
}