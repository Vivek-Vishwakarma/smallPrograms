#include<iostream>
#include<climits>
using namespace std;

int Linear(int arr[],int n ,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
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
    cout << Linear(array,n,key);
    return 0;
}