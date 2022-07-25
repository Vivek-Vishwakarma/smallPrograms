#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr = {11, 3, 7, 12, 18, 14, 16, 21, 2, 26, 30, 8, 42};
    int count = 0, max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            count++;
            max = arr[i];
        }
    }
    cout << count;
    return 0;
}