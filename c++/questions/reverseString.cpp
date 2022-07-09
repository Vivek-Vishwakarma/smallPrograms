#include <bits/stdc++.h>
using namespace std;
string reverseStr(string s)
{
    if (s.length==0)
    {
        return s;
    }
    return reverseStr()
}

int main()
{
    // reverse(s.begin(), s.end()); using inbuilt function
    // cout << s << endl;
    string greeting = "Vivek";
    string s = "Hello";
    int len = greeting.length();
    int n = len - 1;
    for (int i = 0; i < (len / 2); i++)
    {
        // Using the swap method to switch values at each index
        swap(greeting[i], greeting[n]);
        n = n - 1;
    }
    cout << greeting << endl;
}