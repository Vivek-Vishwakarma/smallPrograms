#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = s[i]-32;
    }
    cout << s;
    return 0;
}