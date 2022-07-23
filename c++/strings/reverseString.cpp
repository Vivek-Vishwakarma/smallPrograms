#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s = "this is string";
    for (int i = 0; i < s.size() / 2; i++)
    {
        swap(s[i], s[s.size() - i - 1]);
    }
    // reverse(s.begin(),s.end());
    cout << s;
    return 0;
}