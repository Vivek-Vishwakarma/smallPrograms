#include <bits/stdc++.h>
using namespace std;
string removeChars(string s1, string s2)
{
    string ans;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s2.find(s1[i]) == string ::npos)
            ans += s1[i];
    }
    cout << ans;
    return ans;
}
int main()
{
    system("cls");
    string s1 = "this is string";
    string s2 = "ri";
    removeChars(s1,s2);
    return 0;
}