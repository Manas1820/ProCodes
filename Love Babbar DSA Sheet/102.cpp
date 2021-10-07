/*
Value equal to index value

Difficulty: School 
Accuracy: 54.64% Submissions: 28097 Points: 0

Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value.
Input: 
N = 5
Arr[] = {15, 2, 45, 12, 7}
Output: 2
Explanation: Only Arr[2] = 2 exists here.

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        int arr2[n];
        vector<int> soln;
        for (int i = 1; i <= n; i++)
        {
            if (i == arr[i - 1])
                soln.push_back(i);
        }
        return soln;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty())
        {
            cout << "Not Found";
        }
        else
        {
            for (int x : ans)
            {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}


/*

Result: 

Total Time Taken:
0.3/1.7

*/