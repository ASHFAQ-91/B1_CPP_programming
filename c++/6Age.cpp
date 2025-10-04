// 6 // Take input of age of 3 people by user and determine oldesst and youngest among them.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter 3 people age :  ";
    cin >> a >> b >> c;
           if(a>b && a>c) {
            cout << a << " is a Oldest person" << endl;
        }
        else if(b>a && b>c) {
            cout << b << " is a oldest person" << endl;
        }
        else {
            cout << c << " is a oldest person" << endl;
        }
                    if(a<b && a<c) {
                    cout << a << " is a youngest person";
                }
                else if(b<a && b<c) {
                    cout << b << " is a youngest person";
                }
                else {
                    cout << c << " is a youngest person";
                }
return 0;
}