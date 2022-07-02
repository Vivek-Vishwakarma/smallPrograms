#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    if (s.size() == 0)
    {
        return s;
    }
    reverse(s.substr(1));
    cout << s[0];
}
int main()
{
    system("cls");
    string n = "vivek";
    reverse(n);
    return 0;
}