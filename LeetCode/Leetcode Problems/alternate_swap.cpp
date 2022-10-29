// https://leetcode.com/discuss/interview-question/629851/minimum-integer-after-swap-adjacent-array-elements-by-k-times


#include <iostream>
#include <vector>

using namespace std;

int printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

int swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    return 0;
}

int swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    printArr(arr, size);
    return 0;
}

int main()
{

    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {5, 6, 7, 8, 9, 10, 11};
    swapAlternate(even, 8);
    swapAlternate(odd, 7);
    return 0;
}