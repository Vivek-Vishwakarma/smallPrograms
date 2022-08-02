#include <bits/stdc++.h>
using namespace std;
// using recursion
//  int fact(int n){
//      if (n==1)
//      {
//          return n;
//      }
//      return n*fact(n-1);
//  }

int main()
{
    system("cls");
    // cout << fact(5);
    int n = 5, fact = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n == 1 || n == 0)
        {
            cout << "1";
        }
        else
        {
            fact = fact * i;
            // cout << fact << " ";
        }
    }
    cout << fact;
    return 0;
}