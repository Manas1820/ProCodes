/*Question:

Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Difficulty: Easy

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 

 

Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6 

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> find_soln(int a[], int n, int x)
{
    int last = 0;
    vector<int> soln;
    bool found = false;
    for (int i = 0; i < n; i++)
    {

        if ((a[i] == x) && (soln.size() == 0))
        {
            soln.push_back(i);
            found = true;
        }
        if (a[i] == x)
        {
            last = i;
            found = true;
        }

        if ((found == false) && (i == n - 1))
        {
            soln.push_back(-1);
            soln.push_back(-1);
        }
    }
    soln.push_back(last);
    return soln;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find_soln(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

/* 
Result:
Total Time Taken:
0.3/1.7
*/