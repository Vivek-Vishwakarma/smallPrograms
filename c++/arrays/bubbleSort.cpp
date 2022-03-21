#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter the elements of the array : " << endl;
    int array[n];
    for (int i = 0; i < n ;i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n ;i++)
    {
        cout << array[i] << " ";
    }
    cout <<endl;
    cout<< "Sorted array is :" <<endl;
    
    for (int i = 0; i < n ;i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}