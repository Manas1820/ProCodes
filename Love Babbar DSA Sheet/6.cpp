/*
Problem :
Write a program to reverse an array or string.

Difficulty Level : Basic
Last Updated : 08 Sep, 2020

 

Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/

#include <iostream>

using namespace std;

int rev_arr(int arr[], int m, int n)
{
    int temp = 0;
    while (m < n)
    {
        temp = arr[m];
        arr[m] = arr[n];
        arr[n] = temp;
        m++;
        n--;
    }
    return 0;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rev_arr(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}