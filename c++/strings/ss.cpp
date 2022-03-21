#include<bits/stdc++.h>
using namespace std;
//abnacfcabaa
int main()
{
    system("cls");
    string str;
    getline(cin, str);
    cout << "The initial string is : ";
    cout << str << endl;
    int N = str.length();
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(str[j] == 'a' && str[i] == 'a'){   
                cout << str.substr(j,i+1);
                cout << endl;
                count++;
            }
        }
        
    }
    cout << count;
    return 0;
}