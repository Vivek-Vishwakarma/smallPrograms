#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
    cout << endl;
    list<int> h1;
    h1.push_back(1);
    h1.push_back(5);
    h1.push_back(3);
    list<int>::iterator i;

    for (i = h1.begin(); i != h1.end(); ++i)
    {
        cout << *i << '\t';
    }
    //     cout << endl;
    // vector<int> hello;
    //     hello.push_back(3);
    //     hello.push_back(7);
    //     hello.push_back(2);
    //     hello.push_back(1);
    //     sort(hello.begin(),hello.end());
    //     for (int i = 0; i < hello.size(); i++)
    //     {
    //         cout << hello[i] << " ";
    //     }

    return 0;
}