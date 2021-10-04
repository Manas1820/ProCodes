/*

Kadane's Algorithm
Difficulty: Medium
Accuracy: 51.0% Submissions: 100k+ Points: 4

Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)


Your Task:
You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] ≤ 107


Company Tags
24*7 Innovation Labs
Accolite
Amazon
Citrix
D-E-Shaw
FactSet
Flipkart
Hike
Housing.com
MetLife
Microsoft
Morgan Stanley
Ola Cabs
Oracle
Payu
Samsung
Snapdeal
Teradata
Visa
Walmart
Zoho
Google
Adobe
*/

#include <iostream>

using namespace std;

int maxsubarraysum(int arr[], int n)
{
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < (max_ending_here + arr[i]))
        {
            max_ending_here = max_ending_here + arr[i];
        }
        else
        {
            max_ending_here = arr[i];
        }
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main()
{
    int a[1000], n;
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int max_sum = maxsubarraysum(a, n);
        cout << max_sum << endl;
    }
    return 0;
}


/*
Total Time Taken:
0.3/1.4
*/