#include <iostream>
using namespace std;

int lastIndex(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int temp = -1;
    while (e >= s)
    {
        int mid = s + (e-s)/2;
        if (arr[mid] == key)
        {
            temp = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return temp;
}
int firstIndex(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int temp = -1;
    while (e >= s)
    {
        int mid = s + (e-s)/2;
        if (arr[mid] == key)
        {
            temp = mid;
            e = mid - 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return temp;
}

int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter the elements of the array : " << endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter key u wanna find : " << endl;
    cin >> key;
    
    cout <<  firstIndex(array, n, key) << endl;
    cout <<  lastIndex(array, n, key);
    return 0;
}