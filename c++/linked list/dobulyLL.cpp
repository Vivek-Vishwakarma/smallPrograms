#include <bits/stdc++.h>
using namespace std;
class dobulyLL
{
public:
    int val;
    dobulyLL *next;
    dobulyLL *prev;
    dobulyLL(int data)
    {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

void insertTail(dobulyLL *&head, int data)
{
    dobulyLL *n = new dobulyLL(data);
    dobulyLL *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void insertHead(dobulyLL *&head, int data)
{
    dobulyLL *n = new dobulyLL(data);
    head->prev = n;
    n->next = head;
    head = n;
}

void deleteValue(dobulyLL *&head, int data)
{
    dobulyLL *temp = head;
    while (temp->next != NULL)
    {
        if (temp->val == data)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            // cout << "hello";
        }
        temp = temp->next;
    }
}

void display(dobulyLL *head)
{
    dobulyLL *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    system("cls");
    dobulyLL *head = new dobulyLL(1);
    dobulyLL *first = new dobulyLL(2);
    dobulyLL *second = new dobulyLL(3);
    head->next = first;
    first->next = second;
    first->prev = head;
    second->prev = first;
    cout << "Original : " << endl;
    display(head);
    cout << endl;
    cout << "Delete value" <<endl;
    deleteValue(head, 2);
    display(head);
    cout << endl;
    cout << "Insert at tail" <<endl;
    insertTail(head, 4);
    display(head);
    cout << endl;
    cout << "Insert at head" <<endl;
    insertHead(head, 5);
    display(head);
    cout << endl;
    return 0;
}