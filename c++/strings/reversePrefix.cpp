#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ch)
        {
            reverse(word.begin(), word.begin() + i + 1);
            break;
        }
    }
    return word;
}

int main()
{
    system("cls");
    string word = "something";
    char ch = 't';
    cout << reversePrefix(word, ch);
    return 0;
}