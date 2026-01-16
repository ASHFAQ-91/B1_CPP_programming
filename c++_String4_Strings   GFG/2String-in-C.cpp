// 2 // String in C.
// 1. char str[] = "GeeksforGeeks";

// 2. char str[50] = "GeeksforGeeks";

// 3. char str[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

// 4. char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'}; // not need '\0' in this case
#include<iostream>
using namespace std;
int main()
{
    char str[9] = {'M', 'O', 'H', 'A', 'M', 'M', 'E', 'D'};         // similer to the 4th one.
    cout << str;
}