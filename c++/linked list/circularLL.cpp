#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int d)
    {
        val = d;
        next = NULL;
    }
};
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->val << "->";
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    system("cls");
    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(3);
    head->next = first;
    first->next = second;
    display(head);
    return 0;
}