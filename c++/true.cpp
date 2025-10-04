// 10 // true
#include<iostream>
using namespace std;
int main()
{
    int x=2, y=5, z=0;

    if(x==2) {
        cout << "true";
    }
    if(x != 5) {
        cout << "\n" << "true";
    }
    if(x!=5 && y>=5) {
        cout << endl << "true";
    }
    if(z!=0 || x==2) {
        cout << endl << "true";
    }
    if(!y<10) {
        cout << endl << "False";
    }

return 0;
}