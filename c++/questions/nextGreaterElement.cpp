#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; i < nums2.size(); j++)
        {
            if (nums2[i] > nums1[i])
            {
                result.push_back(nums2[i]);
            }
            else
            {
                result.push_back(-1);
            }
        }
    }
    return result;
}
int main(){
    vector<int> myvector{4,1,2};
    vector<int> myvector1{1,3,4,2};
    nextGreaterElement(myvector, myvector1);
    return 0;
}