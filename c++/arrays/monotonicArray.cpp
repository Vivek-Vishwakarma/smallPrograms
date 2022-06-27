#include <iostream>
using namespace std;

bool isMonotonic(int nums[], int size)
{
    bool ans = true;
    if (nums[0] > nums[1])
    {
        for (int i = 1; i < size; i++)
        {
            if (nums[i] == nums[i - 1]){
                continue;
            }
            if (nums[i] > nums[i - 1])
            {
                ans = false;
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i < size; i++)
        {
        if (nums[i] == nums[i - 1]){
                continue;
            }
            if (nums[i] < nums[i - 1])
            {
                ans = false;
                break;
            }
        }
    }

    return ans;
}

int main()
{
    int arr[3] = {1, 1, 0};
    cout << "Bool : " << isMonotonic(arr, 3);
    return 0;
}