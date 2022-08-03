#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/running-sum-of-1d-array/
vector<int> runningSum(vector<int> &nums)
{
    vector<int> ans;
    int sum=0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum=sum+nums[i];
        ans.push_back(sum);
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    runningSum(arr);
    return 0;
}