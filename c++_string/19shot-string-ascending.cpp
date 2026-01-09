// print the shoting string in the ascending order.
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    string str = "Mohammed AShfaq Qureshi 786";

    sort(str.begin(),str.end());
    cout << str << endl;
}