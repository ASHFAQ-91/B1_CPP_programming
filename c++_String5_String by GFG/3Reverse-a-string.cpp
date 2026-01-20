// 3 // Print the Reverse of the string as output.
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a word :  ";
    cin >> str;
    char temp;
    int x = str.size();
    
    for(int i=0; i<str.size()/2; i++)
    {
        temp = str[x-1];
        str[x-1] = str[i];
        str[i] = temp;
        x--;
    }
    cout << endl << str << endl;
}