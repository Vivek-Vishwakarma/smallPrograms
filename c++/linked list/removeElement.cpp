#include <bits/stdc++.h>
using namespace std;

class LL
{
public:
    int data;
    LL *next;
    LL(int value)
    {
        data = value;
        next = NULL;
    }
};

void deleteVal(LL *&head, int d)
{
    LL *temp = head;
    if (temp->data == d)
    {
        head = head->next;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == d)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
}

void display(LL *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    LL *head = new LL(10);
    LL *first = new LL(20);
    LL *second = new LL(30);
    LL *third = new LL(40);
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;
    display(head);
    deleteVal(head, 10);
    display(head);
    return 0;
}