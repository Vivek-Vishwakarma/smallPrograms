#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int s[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1,2,3}};
    cout << "\nThe 2-D Array is:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Spiral is : " << endl;
    int rowStart = 0, rowEnd = sizeof(s) / sizeof(s[0]) - 1;
    int colStart = 0, colEnd = sizeof(s[0]) / sizeof(s[0][0]) - 1;
    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int i = colStart; i <= colEnd ; i++)
        {
            cout << s[rowStart][i] << " ";
        }
        rowStart++;
        for (int i = rowStart; i <= rowEnd ; i++)
        {
            cout << s[i][colEnd] << " ";
        }
        colEnd--;
        for (int i = colEnd; i >= colStart ; i--)
        {
            cout << s[rowEnd][i] << " ";
        }
        rowEnd--;
        for (int i = rowEnd; i >= rowStart ; i--)
        {
            cout << s[i][colStart] << " ";
        }
        colStart++;
    }
    return 0;
}