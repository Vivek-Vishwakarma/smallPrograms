#include<iostream>
using namespace std;

int ceiling(int arr[],int n ,int key){
    int s=0;
    int e=n-1;
    while(e>=s){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return s;
}

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
    int key;
    cout << "Enter key u wanna find : " << endl;
    cin >> key;
    cout << ceiling(array,n,key);
    return 0;
}