//https://leetcode.com/problems/plus-one/
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<int> digits;
    digits.push_back(4);
    digits.push_back(3);
    digits.push_back(2);
    digits.push_back(1);
    // digits.push_back(1);
    int n=0;
    for (int i = 0; i <= digits.size(); i++)
    {
        n += digits[i]*pow(10,i);
    }
    cout << n;
    return 0;
}