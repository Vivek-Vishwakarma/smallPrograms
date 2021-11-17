#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\nEnter row and column : \n";
    cin >> a;
    cin >> b;
    cin >> c;
    int m1[a][b],m2[b][c];
    cout << "\nEnter 1st array elements : \n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "\nEnter 2nd array elements : \n";

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m2[i][j];
        }
    }
    
    int ans[a][c];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans[i][j] = 0;
        }
    }
    cout << "Multiplication is : \n";


    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < b; k++)
            {
                ans[i][j] += m1[i][k]*m2[k][j];
            }
            
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}