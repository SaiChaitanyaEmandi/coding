#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void ins_beg(Node** head,int new_data)
{
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}

void ins_pos(Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void ins_end(Node** head,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    Node* last=*head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    return;
}

void delnode(Node** head,int key)
{
    Node* dup=*head;
    Node* pre_of_dup=NULL;
    if(dup!=NULL && dup->data==key)
    {
       // *head=dup->next;
        delete dup;
        return;
    }
    else
    {
        while(dup!=NULL && dup->data!=key)
        {
            pre_of_dup=dup;
            dup=dup->next;
        }
        if(dup==NULL)
        return;
        pre_of_dup->next=dup->next;
        delete dup;
    }
}

void del_pos(Node** head,int pos)
{
    if(*head==NULL)
    return;
    Node* dup=*head;
    if(pos==0)
    {
        *head=dup->next;
        delete dup;
        return;
    }
    for(int i=0;dup!=NULL && i<pos-1;i++)
    {
        dup=dup->next;
    }
    if(dup==NULL || dup->next==NULL)
    return;
    Node* after=dup->next->next;
    delete dup->next;
    dup->next=after;

}

void reverse(Node* head)
{
    Node* curr=head;
    Node* prev=NULL;
    Node* nxt=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr-nxt;
    }
    head=prev;
}

void printlist(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}

int main()
{
    Node* head;
    ins_end(&head,9);
    ins_beg(&head,7);
    ins_end(&head,5);
    ins_beg(&head,3);
    ins_end(&head,10);
    ins_pos(head->next->next,1);
    printlist(head);
    delnode(&head,9);
    printlist(head);
    del_pos(&head,3);
    printlist(head);
    reverse(head);
    printlist(head);
}