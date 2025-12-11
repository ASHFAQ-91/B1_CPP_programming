// apna college , video number 56 , Ploymorphism are mainly two types :
// 1) Compile time      2) Run time
// 1) -> i) Function Overloading , ii) Operator Overloading
// 2) Run time -> Virtual Overloading
// this is 1) Complie time -> Function Overloading 
#include <iostream>
using namespace std;
class masq
{
public:
    void fun() // default function (((1)))
    {
        cout << "I am a function with no argument \n";
    }
    void fun(int x)     // (((2)))
    {
        cout << x << "  I am a function with int argument \n";
    }
    void fun(double x)      // (((3)))
    {
        cout << x << "  I am a function with double argument \n";
    }
};
int main()
{
    masq obj;
    obj.fun();          // (((1)))
    obj.fun(6.3);       // (((3)))
    obj.fun(5);         // (((2)))
}