#include<bits/stdc++.h>
using namespace std;

class LL{
    public:
    int data;
    LL *next;
    LL(int value){
        data = value;
        next = NULL;
    }
};

void insertAtIndex(LL *&head, int d, int index){
    LL *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    LL *newNode = new LL(d);
    newNode->next = temp->next;
    temp->next = newNode;
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

int main(){
    LL *head = new LL(10);
    LL *first = new LL(20);
    LL *second = new LL(40);
    head->next = first;
    first->next = second;
    second->next = NULL;
    display(head);
    insertAtIndex(head, 30, 2);
    insertAtIndex(head, 100, 3);

    display(head);
    return 0;
}