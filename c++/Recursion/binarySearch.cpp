#include<iostream>
 
using namespace std;

int binSearch(int arr[], int target, int s, int e){
    if (s=e)
    {
        return -1;
    }
    int m = s + (e-s)/2;
    if (arr[m] == target)
    {
        return m;
    }
    if (target > arr[m])
    {
        return binSearch(arr, target, m+1, e);
    }
    if (target < arr[m])
    {
        return binSearch(arr, target, s, m-1);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int target = 5;
    cout << binSearch(arr , target, 0, sizeof(arr)/sizeof(arr[0]));
    return 0;
}