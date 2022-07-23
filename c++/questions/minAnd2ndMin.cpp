#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    unordered_set<int> ans;
    int arr[13] = {5 ,11 ,1 ,6 ,6 ,8 ,11 ,5 ,12 ,11 ,6 ,1 ,7};
    int n=13;
    vector<int> something;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        ans.insert(arr[i]);
    }
    for(auto it : ans){
        something.push_back(it);
    }
    sort(something.begin(), something.end());
    for (int i = 0; i < 2; i++)
    {
        cout << something[i] << " ";
    }
    
    return 0;
}
