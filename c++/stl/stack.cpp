#include <bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.emplace(60);
    cout << "Top : " << s.top() << endl;
    cout << "Size : " << s.size() << endl;
    cout << "This is how stack looks : " << endl;
    while (!s.empty()) {
        cout  << s.top() << endl;
        s.pop();
    }
    return 0;
}