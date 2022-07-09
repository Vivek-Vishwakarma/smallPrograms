#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> arr;
    for (int i = 0; i < nums.size(); i++)
    {
        int number = nums[i];
        for (int j = 0; j < nums.size(); j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {
                number = number * nums[j];
            }
        }
        arr.push_back(number);
        // cout << nums[i] << endl;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return arr;
}
int main()
{
    system("cls");
    vector<int> ans = {1, 2, 3};
    productExceptSelf(ans);
    return 0;
}