#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    vector<int> ans;
    for (int i = 0; i < accounts.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            count += accounts[i][j];
        }
        ans.push_back(count);
    }
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}