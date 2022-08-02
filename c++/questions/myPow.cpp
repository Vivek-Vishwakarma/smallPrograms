#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return x * myPow(x, n - 1);
    }
}

int main()
{
    system("cls");
    int x = 2, n = 8;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans=ans*x;
    }
    // int ans = pow(x,n);
    // cout << myPow(2, 8);
    cout << ans;
    return 0;
}