#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    cout << "Enter number : \n";
    int n;
    cin >> n;
    int n1 = 0, n2 = 1, count;
    for (int i = 0; i < n-2; i++)
    {
        if (i==0)
        {
            cout << n1 << " ";
        }
        if (i==1)
        {
            cout << n2 << " ";
        }
        count = n1+n2;
        cout << count << " ";
        n1=n2;
        n2=count;
    }
    
    return 0;
}