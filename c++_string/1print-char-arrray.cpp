// print a character array
#include<iostream>
using namespace std;
int main()
{
    char arr[] = "apple";
    for(int i=0; arr[i]!='\0'; i++)
    {
        cout << "\n" << arr[i];
    }
}