#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,3,2,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int startingIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[startingIndex])
            {
               startingIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[startingIndex];
        arr[startingIndex] = temp;


    }
    cout << "Sorted array is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

