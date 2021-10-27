#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int l = nums.size();
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    for (int x : ans)
        cout << x;
    return ans;
}

int main()
{
    vector<int> nm{3, 2, 4};
    twoSum(nm, 6);
    return 0;
}