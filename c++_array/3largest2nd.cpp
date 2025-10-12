// 3 // Find second largest element in an given array of integers.
#include <iostream>
using namespace std;
int main()
{
    int num, i, j;
    cout << "How many value u will enter :  ";
    cin >> num;
    int arr[num];
    for (i = 0; i < num; i++)
    {
        cout << "Enter value " << i + 1 << " :  ";
        cin >> arr[i];
    }
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    cout << "The second largest value is :  " << arr[num - 2];
}