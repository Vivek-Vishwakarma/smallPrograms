#include<iostream>
using namespace std;

bool isMonotonic(int nums[],int size) {
        bool ans = true;
        for(int i = 1;i < size ;i++){
            if(nums[i] < nums[i-1]){
                ans = false;
                break;
            }
        }
        return ans;
    }

int main(){
    int arr[5] = {1,2,2,3,4};
    cout << "Bool : " << isMonotonic(arr, 5);
    return 0;
}