#include<iostream>
#include<cmath>
 
using namespace std;

//Prime
// int main()
// {
//     int n;
//     cin >> n;
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout << "not prime" <<endl;
//             break;
//         }
//     }
//     if (i==n)
//     {
//         cout << "prime";
//     }
//     return 0;
// }

//Optimized Prime
int main()
{
    int n;
    cin >> n;
    int i;
    bool flag = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout << "not prime" <<endl;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "prime";
    }
    return 0;
}