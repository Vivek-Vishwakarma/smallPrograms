//https://leetcode.com/problems/maximum-difference-between-increasing-elements/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(10);
    // nums.push_back(1);
    vector<int> arr;
    int max;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            max = nums[j] - nums[i];
            // cout << max <<endl;
            arr.push_back(max);
        }
    }
    cout << *max_element(arr.begin(),arr.end());

    return 0;
}