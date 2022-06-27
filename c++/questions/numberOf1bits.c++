#include<bits/stdc++.h>
using namespace std;
int main()
{
    uint32_t n = 00000000000000000000000000001011;
    count = 0;
    while (n>0)
    {
        int lastDigit = n%10;
        if (lastDigit == 1)
        {
            count ++;
        }
        n=n/10;
    }
    cout << count;
    return 0;
}