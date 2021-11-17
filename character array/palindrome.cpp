#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of character : \n";
    cin >> n;
    char arr[n+1];
    cout << "Enter the word : \n";
    cin >> arr;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] !=  arr[n-1-i])
        {
            flag = false;
            break;
        }
    }
    if(flag ==  false)
        cout << "Its not palindrome";
    else    
        cout << "Its palindrome";
    
    return 0;
}