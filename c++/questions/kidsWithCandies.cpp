#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> ans;
    int max = *max_element(candies.begin(),candies.end());
    cout << max << endl;
    for (int i = 0; i < candies.size(); i++)
    {
        candies[i] = candies[i]+extraCandies;
    }
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] >= max)
        {
            candies[i] = true;
        }
        else{
            candies[i] = false;
        }
    }
    for (int i = 0; i < candies.size(); i++)
    {
        cout << candies[i] << " ";
    }
    
}
int main()
{
    vector<int> q = {2,3,5,1,3};
    kidsWithCandies(q,3);
    return 0;
}