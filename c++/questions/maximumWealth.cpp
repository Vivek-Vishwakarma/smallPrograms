#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    vector<int> ans;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            count += accounts[i][j];
            cout << count;
        }
        ans.push_back(count);
    }
    cout << *max_element(ans.begin(), ans.end());
    cout << "hello";
    return 0;
}