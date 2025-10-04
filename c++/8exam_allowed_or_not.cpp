// 8 // a student is allowed to sit in exam or not.
#include <iostream>                                         // pre-processor <header file>
using namespace std;                                        // std global declare
int main()
{
    int attend, held = 250, ptage, medical;
    cout << "How many class you attend :  ";
    cin >> attend;
    ptage = attend * 100 / held;
    cout << endl << ptage << " % ";                     // endl or "\n" both uses are to go to next line 
    if (ptage >= 75)
    {
        // cout << endl << "you are able to sit in the exam";
        //  goto a;

        cout << endl
             << "You have medical cause :  ";
        cin >> medical;
        if (medical == 'Y')
        {
            cout << endl
                 << "you are able to sit in the exam";
        }
    }
    else
    {
        cout << endl
             << "Sorry !  you can't sit in the exam because you attendace is less then 75%";
    }
    // a : ;
    return 0;
}