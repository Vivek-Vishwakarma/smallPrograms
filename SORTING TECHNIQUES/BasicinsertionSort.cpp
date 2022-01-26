#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int arr[] = {5, 3, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
            }
        }
    }
    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
