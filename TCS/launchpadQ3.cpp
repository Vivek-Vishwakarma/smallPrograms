#include <bits/stdc++.h>
using namespace std;
class question
{
public:
    string Name;
    string Category;
    unordered_map<string, int> BrandPrice;
    question(string name,string cat){
        Name = name;
        Category = cat;
    }
};
int main()
{
    system("cls");
    question q1("this is name","name");
    cout << q1.Name;
    return 0;
}