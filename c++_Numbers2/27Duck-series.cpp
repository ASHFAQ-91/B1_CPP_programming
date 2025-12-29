// 27 // Find Duck Numbers between 1 to 500.
#include<iostream>
using namespace std;
int main()
{
    int dkno, cdkno, flag=0, i;
    cout << "DUCK NUMBER SERIES\n--------------------------------------------------\n";
    cout << "Print series till :  ";
    cin >> dkno;
    for(i=1; i<=dkno; i++)
    {
        cdkno = i;
        flag = 0;
        while(cdkno > 0)
        {
            if(cdkno % 10 == 0)
            {
                flag=1;
                break;
            }
            cdkno /= 10;
        }
        if(cdkno > 0 && flag == 1)
        {
            cout << i << " ";
        }
    } 
}