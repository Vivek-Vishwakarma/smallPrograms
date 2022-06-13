// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

// int maxProfit(){

//     return
// }

int main()
{
    system("cls");
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(6);
    prices.push_back(4);
    prices.push_back(3);
    prices.push_back(1);
    // prices.push_back(4);
    // vector<int> arr;
    // int profit=0;
    // for (int i = 0; i <= prices.size()-1; i++)
    // {
    //     for (int j = 0; j <= prices.size()-1; j++)
    //     {
    //         profit = prices[j] - prices[i];
    //         cout << profit << endl;
    //         arr.push_back(profit);
    //     }
    // }
    // // sort(arr.begin(),arr.end());
    // // cout << arr[arr.size()];
    // cout << "profit" << " : " <<*max_element(arr.begin(),arr.end());
    int maxProfit = 0;
    int minimum = prices[0];
    int profit;
    for (int i = 0; i < prices.size(); i++)
    {
        minimum = min(minimum,prices[i]);
        profit = prices[i]-minimum;
        maxProfit = max(maxProfit,profit);
    }
    cout << maxProfit;
    return 0;
}