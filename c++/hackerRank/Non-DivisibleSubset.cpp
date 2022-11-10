#include <bits/stdc++.h>
using namespace std;

int nonDivisibleSubset(int k, vector<int> s)
{
    set<int> set;
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if ((s[i] + s[j]) % k != 0)
            {
                set.insert(s[j]);
                set.insert(s[i]);
                mp[s[i]]++;
                mp[s[j]]++;
            }
        }
    }
    for (auto it : mp)
    {
        if (it.second > 3)
        {
            count++;
        }
    }
    cout << set.size() << endl;
    cout << count;
}

int main()
{
    system("cls");
    vector<int> arr = {278, 576, 496, 727, 410, 124, 338, 149, 209, 702, 282, 718, 771, 575, 436};
    nonDivisibleSubset(7, arr);
    return 0;
}