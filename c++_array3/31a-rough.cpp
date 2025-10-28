#include<iostream>
using namespace std;
int main()
{
    char temp;
    for(int i=0; i<=258; i++)
    {
        temp = i;
        cout << temp << " = " << i << "\n" ;
    }
    char temp5; // char to char is char
    temp5 = '♠♣' ;
    cout << temp5;
}
// int main()
// {
    // char temp; // char to char is char
    // temp = '♠♣';
    // cout << temp;

//     char temp1;  // char to int(take as ascii) and print char
//     temp1 = ♠♣ ;
//     cout << endl << temp1;

//     char temp2;  // char to int(take as ascii) and print char
//     temp2 = 5 ;
//     cout << endl << temp2;

//     int var;        // int to int is int
//     var = 64;
//     cout << endl << var;

//     int var1;        // int to char is ascii
//     var1 = '5';
//     cout << endl << var1;
// }