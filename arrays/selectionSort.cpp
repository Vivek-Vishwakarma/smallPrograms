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
    for(int i = 0; i < n-1 ; i++){
        for(int j = i+1; j < n; j++){
            if(array[j]<array[i]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for (int i = 0; i < n ;i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}