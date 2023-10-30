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

int main()
{
    int n; cin>>n;
    int p[n],a[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>a[i];
    }
    Node* root;
    for(int i=0;i<n;i++)
    {
        
    }
}