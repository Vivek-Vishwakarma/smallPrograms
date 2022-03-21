#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter the elements of the array : " << endl;
    int array[n];
    for (int i = 1; i <=n ;i++)
    {
        cin >> array[i];
    }
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;
    for (int i = 1; i <=n ;i++)
    {
        maxNumber=max(maxNumber,array[i]);
        minNumber=min(minNumber,array[i]);
    }
    cout << "maxNumber is : "<< maxNumber << endl;
    cout << "minNumber is : " << minNumber << endl;

    return 0;
}