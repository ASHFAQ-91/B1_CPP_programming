// 22 // Concate two string .
#include<iostream> 
using namespace std;
int main()
{
    string s1 , s2;
    cout << "\nEnter the 1st String :  ";
    getline(cin , s1);
    cout << "\nEnter the 2nd String :  ";
    getline(cin, s2);

    s1.append(s2);
    cout << endl << s1 << endl;
}