#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> res;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            break;
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    for (int n : ans)
    {
        cout << n << endl;
    }
}