#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.emplace(60);
    cout << "Front : " << s.front() << endl;
    cout << "Back : " << s.back() << endl;
    cout << "Size : " << s.size() << endl;
    cout << "This is how queue looks : " << " ";
    while (!s.empty()) {
        cout  << s.front() << " ";
        s.pop();
    }
    return 0;
}