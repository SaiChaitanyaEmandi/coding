#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};

void ins_beg(Node** head,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=*head;
    new_node->prev=NULL;
    if((*head)!=NULL)
    (*head)->prev=new_node;
    *head=new_node;
}

void ins_pos(Node* prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"new node cannot be inserted"<<" ";
        return;
    }
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    new_node->prev=prev_node;
    if(new_node->next!=NULL)
    new_node->next->prev=new_node;
}
void printlist(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main()
{
    Node *head;
    ins_beg(&head,6);
    ins_beg(&head,3);
    ins_pos(head->next,4);
    ins_beg(&head,2);
    ins_pos(head->next->next,5);
    printlist(head);
}