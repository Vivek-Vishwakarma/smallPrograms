#include <bits/stdc++.h>
using namespace std;
//using recursion
void reverseStr(string s)
{
    if (s.length()==0)
    {
        return;
    }
    reverseStr(s.substr(1));
    cout << s[0];
}
//using stack
void revStack(string str){
    stack<char> stack;
    for (int i = 0; i < str.length(); i++)
    {
        stack.push(str[i]);
    }
    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
}
int main()
{
    system("cls");
    string greeting = "Vivek";
    string s = "Hello";
    int len = greeting.length();
    int n = len - 1;
    //using loop
    for (int i = 0; i < (len / 2); i++)
    {
        swap(greeting[i], greeting[n]);
        n = n - 1;
    }
    reverse(s.begin(), s.end()); 
    cout << s << endl;
    cout << greeting << endl;
    string a = "this is string";
    reverseStr(a);
    cout << endl;
    revStack(a);
    return 0;
}