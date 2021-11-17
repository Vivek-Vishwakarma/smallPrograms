#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of sentence : \n";
    cin >> n;
    cin.ignore();
    cout << "Enter the word : \n";
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currentElem = 0, maxLength = 0;
    int currentWord = 0, maxWord = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentElem > maxLength)
            {
                maxLength = currentElem;
                maxWord = currentWord;
            }
            currentElem = 0;
            currentWord = i+1;
        }
        else
            currentElem++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << maxLength << endl;
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i+maxWord];
    }
    
    return 0;
}