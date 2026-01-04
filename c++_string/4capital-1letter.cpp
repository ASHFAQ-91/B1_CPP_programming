// 3 // to capitalize the first letter of each word of a given string. Words must be separated - 
     // - by only one space.
#include<iostream>
#include<string>
#include<algorithm>             // transform to upper letter
using namespace std;
// int main()                       // using toupper function
// {
//     string str;
//     getline(cin, str);
    
//     for(int i=0; i<str.length(); i++)
//     {
//         if(i==0)
//         {
//             str[i] = toupper(str[i]);
//         }
//         else if(str[i-1]==' ')
//         {
//             str[i] = toupper(str[i]);
//         }
//         cout << str[i];
//     }
// }
//-------------------------------------------OR--------------------------------------------
// int main()                   // without using function
// {
//     string str;
//     getline(cin , str);

//     for(int i=0; i<str.size(); i++)
//     {
//         if(str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }
//     cout << str;
// }
//------------------------------------------OR---------------------------------------------------
int main()              // using algorithm header file
{
    string str;
    getline(cin , str);

    transform(str.begin() , str.end(), str.begin(), :: toupper);

    cout << str << endl;

}