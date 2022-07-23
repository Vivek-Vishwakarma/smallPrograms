#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int s = 0;
    // int e = 8;
    // while (e >= s)
    // {
    //     int temp;
    //     temp = arr[s];
    //     arr[s] = arr[e];
    //     arr[e] = temp;
    //     s++;
    //     e--;
    // }
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr.begin(),arr.end());
    for (auto it : arr)
    {
        cout << it << " ";
    }
}