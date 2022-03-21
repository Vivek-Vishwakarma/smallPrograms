#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array";
    cin >> n;
    cout << "Enter the elements of the array";
    int array[n];
    for (int i = 1; i <=n ;i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i <=n ;i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}