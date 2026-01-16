// 1 // Array of String in c++.
#include<iostream>
using namespace std;
int main()
{
    const char *ptr[4] = {"Merajuddin", "Jahida", "Altaf", "Masq"};

    for(int i=0; i<4; i++)
    cout << ptr[i] << endl;
}