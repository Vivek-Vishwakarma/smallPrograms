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

bool detectCycle(LL* &head)
{
    LL *fast = head;
    LL *slow = head;
    while (fast != NULL && fast->next != NULL && slow != NULL && slow->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast==slow)
        {
            return true;
        }
        
    }
    return false;
}

void makeCycle(LL* &head,int position)
{
    LL* temp = head;
    LL* startNode;
    int count = 1;
    while (temp->next!=NULL)
    {
        if(count==position){
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;
    
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
    system("cls");
    LL *head = new LL(10);
    LL *first = new LL(20);
    LL *second = new LL(30);
    LL *third = new LL(40);
    LL *forth = new LL(50);
    LL *fifth = new LL(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

    display(head);
    makeCycle(head,2);
    // display(head);
    cout << detectCycle(head);
    return 0;
}