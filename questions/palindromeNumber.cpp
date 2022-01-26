#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    int i = x;
    double sum = 0;
    while (x > 0)
    {
        int r = x % 10;
        sum = (sum * 10) + r;
        x = x / 10;
    }
    if (i == sum)
    {
        // cout << "palindrome";
        return true;
    }
    else
    {
        // cout << "not palindrome";
        return false;
    }
}
int main()
{
    cout << isPalindrome(12321);
    return 0;
}