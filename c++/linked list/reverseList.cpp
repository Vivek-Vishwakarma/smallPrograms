#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertHead(Node* head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void display(Node* head){
    while(head != NULL){
        cout << head -> data << "->";
        head = head -> next;
    }
}
void reverse(Node* &head)
{

}

int main()
{
    Node* n1 = new Node(20);
    Node* n2 = new Node(10);
    n1->next = n2;
    display(n1);
    return 0;
}