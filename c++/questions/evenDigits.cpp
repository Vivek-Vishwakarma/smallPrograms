// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int count;
        // while (nums[i] > 0)
        // {
        //     count++;
        //     nums[i] = nums[i] / 10;
        // }
        string s = to_string(nums[i]);
        if (s.length() % 2 == 0)
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}