// 13 // Separate Even and Odd numbers of an array of integers.
// put all even numbers first, and then odd numbers.
#include <iostream>
using namespace std;
int main()
{
    int num, i, j, a = 0;
    cout << "How many value u will enter :  ";
    cin >> num;
    // NOTE: Not working, Rearson: Variable Length Arrays (VLAs) are not part of C++ standard
    //  int arr1[num], arr2[num] = {0};

    int arr1[100], arr2[100] = {0}; // Use a fixed size for arrays
    // Alternatively, you can use std::vector for dynamic sizing:
    // vector<int> arr1(num), arr2(num, 0);
    for (i = 0; i < num; i++) // get value
    {
        cout << "Enter value " << i + 1 << " :  ";
        cin >> arr1[i];
    }
    for (i = 0; i < num - 1; i++) // ascending order
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr1[i] > arr1[j])
            {
                arr1[i] = arr1[i] + arr1[j];
                arr1[j] = arr1[i] - arr1[j];
                arr1[i] = arr1[i] - arr1[j];
            }
        }
    }
    for (i = 0; i < num; i++) // even number
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[a] = arr1[i];
            a++;
        }
    }
    for (i = 0; i < num; i++) // odd number
    {
        if (arr1[i] % 2 != 0)
        {
            arr2[a] = arr1[i];
            a++;
        }
    }
    cout << "\nEven and Odd numbers :  \n";
    for (i = 0; i < num; i++) // print array2
    {
        cout << arr2[i] << "   ";
    }
    return 0;
}