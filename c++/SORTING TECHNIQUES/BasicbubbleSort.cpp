#include <iostream>
using namespace std;

int main(){
    system("cls");
    int arr[5] = {5,4,3,2,1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5-i; j++)
        {
            if (arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    cout << "Sorted array is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

