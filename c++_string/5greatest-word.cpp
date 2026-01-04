// 4 // find the largest word in a given string.
#include<iostream>
using namespace std;
int main()
{
    int n =15;
    char lgr[n];
    int x;
    cout << "How many letter u will enter in a sentence :  ";
    cin >> x;
    cin.ignore();
    char arr[x+1];
    cin.getline(arr , x);
    cin.ignore();

    int counter=0, maxLen=0, j=0;
    for(int i=0; arr[i] != '\0'; i++)
    {
        if(arr[i]==' ')
        {
            counter = 0;
            j=0;
        }
        else 
        {
            counter++;
            lgr[j] = arr[i];
            j++;
            if(counter > maxLen)
            {
                maxLen = counter;
            }
        }
    }
    cout << endl << maxLen << "\n" << lgr << endl ;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     char arr[n+1];

//     cin.getline(arr, n);
//     cin.ignore();

//     int i=0;
//     int currLen = 0, maxLen = 0;
//     int st = 0, maxst=0;

//     while(1)
//     {
//         if(arr[i] == ' ' || arr[i] == '\0')
//         {
//             if(currLen > maxLen)
//             {
//                 maxLen = currLen;
//                 maxst = st;
//             }
//             currLen =0;
//             st = i+1;
//         }
//         else
//         currLen++;
//         if(arr[i]=='\0')
//         break;

//         i++;
//     }
//     cout << maxLen << endl;;
//     for(int i=0; i<maxLen; i++)
//     {
//         cout << arr[i+maxst];
//     }
// }