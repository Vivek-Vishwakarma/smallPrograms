#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    if (n == 1)
    {
        return x;
    }
    x = x * x;
    return myPow(x, n - 1);
}

int main()
{
    // cout << myPow(2, 10);
    int x = 2, n = 10;
    for (int i = 0; i < n; i++)
    {
        x=x*x;
    }
    cout << x;
    return 0;
}