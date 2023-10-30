#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
};

Node* newnode(int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

Node* insertion(Node* root,int val)
{
    if(root==NULL){
        root=newnode(val);
        return root;
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(!temp->left)
            q.push(temp->left);
        else{
            temp->left=newnode(val);
            return root;
        }
        if(!temp->right)
            q.push(temp->right);
        else{
            temp->right=newnode(val);
            return root;
        }
    }
}

void delete_node(Node* root,Node* deep)
{
    queue<Node*>q;
    q.push(root);
    Node* t;
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        if(t==deep)
        {
            t=NULL;
            delete (deep);
            return;
        }
        if(t->left)
        {
            if(t->left==deep)
            {
                t->left=NULL;
                delete (deep);
                return;
            }
            else
                q.push(t->left);
        }
        if(t->right)
        {
            if(t->right==deep)
            {
                t->right=NULL;
                delete (deep);
                return;
            }
            else
                q.push(t->right);
        }
    }
}

Node* deletion(Node* root,int key)
{
    if(root==NULL)
        return NULL;
    if(root->left==NULL && root->right==NULL)
    {
        if(root->data==key)
            return NULL;
        else
            return root;
    }
    queue<Node*>q;
    q.push(root);
    Node* temp;
    Node* key_node=NULL;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->data==key)
            key_node=temp;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    if(key_node!=NULL)
    {
        int x=temp->data;
        delete_node(root,temp);
        key_node->data=x;
    }
    return root;
}

void post_rec(Node* node)
{
    if (node==NULL)
        return;
    post_rec(node->left);
    post_rec(node->right);
    cout<<node->data<<" ";
}

void in_rec(Node* node)
{
    if(node==NULL)
        return;
    in_rec(node->left);
    cout<<node->data<<" ";
    in_rec(node->right);
}

void pre_rec(Node* node)
{
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    pre_rec(node->left);
    pre_rec(node->right);

}

void in_order(Node* root)
{
    stack<Node*>s;
    Node* curr=root;
    while(curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}
int main()
{
    Node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    
    //pre_rec(root);
    //cout<<endl;
    //pre_rec(root);
    //cout<<endl;

    //insertion(root,7);
    //pos_rec(root);
    //root=deletion(root,3);
    //in_rec(root);
    in_order(root);
    cout<<endl;

    return 0;
}