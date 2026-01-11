// find the biggest number in the number string.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str = "123456789";

    sort(str.begin(), str.end(), greater<int>());

    cout << str;
}