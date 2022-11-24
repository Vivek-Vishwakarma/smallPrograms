#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s = "This is lower case string";
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << s << endl;
    string str = "THIS IS UPPER CASE STRING";
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    cout << str;

    return 0;
}