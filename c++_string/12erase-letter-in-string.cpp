// Erase the letters in the string.
#include<iostream>
using namespace std;
int main()
{
    string str = "algrilanate";
    
    str.erase(3 , 4);           // str.erase(starting indexing position , how many from starting position)
    cout << str << endl;
}