#include<bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     struct Node *left;
     struct Node *right;
};

Node *create_Node(int data){

	Node *temp = new Node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;

	return temp;
}

void preOrder(Node *root) {
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root) {
    if(root!=NULL){
        
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void inOrder(Node *root) {
    if(root!=NULL){
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
        
    }
}

void levelOrder(Node * root) {
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *n=q.front();
        q.pop();
        cout<<n->data<<" ";
        if(n->left!=NULL)
            q.push(n->left);
        if(n->right!=NULL)
            q.push(n->right);
    }
}

int height(Node* root) {
        
    if(root==NULL){
        return -1;
    }
       
    return max(height(root->left),height(root->right))+1;
 }

int main(int argc, char const *argv[])
{
	Node *root = create_Node(1);
	root->left = create_Node(2);
    root->right = create_Node(3);
    root->left->left = create_Node(4);
    root->left->right = create_Node(5);
    cout<<"preOrder"<<endl;
    preOrder(root);
    cout<<"postOrder"<<endl;
    postOrder(root);
    cout<<"inOrder"<<endl;
    inOrder(root);
    cout<<height(root)<<endl;
	return 0;
}