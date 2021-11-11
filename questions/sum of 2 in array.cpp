#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the lenght of array : " <<endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    cout << "Array is :" << endl;
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the target :" << endl;
    int target;
    cin >> target;

    for(int i = 0;i<n;i++){
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j] == target)
            {
                cout << "[" << i <<"," << j << "]";
            }
        }
    }
    return 0;
}