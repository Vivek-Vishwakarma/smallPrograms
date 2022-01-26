#include<bits/stdc++.h>
using namespace std;

bool valid(string str){
    stack<char> st;
    for (int i = 0; i < st.size(); i++)
    {
        if (str[i] == '{' || str[i] == '[' || str[i] == '{')
        {
            st.push(str[i]);
        }
        
    }
    
}
int main(){
    string str = "{[()]}";
    cout << valid(str);
    return 0;
}