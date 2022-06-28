#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n, m;
    cout << "\nEnter row and column : \n";
    cin >> n;
    cin >> m;
    int s[n][m];
    cout << "\nEnter array elements : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    
    cout << "\nThe 2-D Array is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter Target : \n";
    int target;
    cin >> target;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == target)
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "Target found";
    }
    else{
        cout << "Not found";
    }
    return 0;
}

//matrix is sorted
// int main(){
//     system("cls");
//     int n, m;
//     cout << "\nEnter row and column : \n";
//     cin >> n;
//     cin >> m;
//     int s[n][m];
//     cout << "\nEnter array elements : \n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> s[i][j];
//         }
//     }
    
//     cout << "\nThe 2-D Array is:\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << s[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Enter Target : \n";
//     int target;
//     cin >> target;
//     bool flag = false;
//     int r = 0, c = n - 1;
//     while(r < m && c >= 0){
//         if (s[r][c] == target)
//         {
//             flag = true;
//         }
//         if (s[r][c] > target)
//         {
//             c--;
//         }
//         else{
//             r++;
//         }
//     }
//     if (flag == true)
//     {
//         cout << "Target found";
//     }
//     else{
//         cout << "Not found";
//     }
    
//     return 0;
// }