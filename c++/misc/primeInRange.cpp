#include <iostream>

using namespace std;

// Prime in given range
int main()
{
    system("cls");
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}