#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
    int arr[6] = {3,2,4,5,6,2};
    int sum = 0;
    int maximum = INT_MIN;
    for (auto it : arr)
    {
        sum += it;
        maximum = max(maximum,sum);
        if(sum < 0) sum = 0;
    }
    cout << maximum;
    return 0;
}