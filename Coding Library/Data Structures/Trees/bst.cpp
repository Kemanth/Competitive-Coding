// includes insertion, search, Lowest Common Ancestor in BST

#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;


node * insert(node * root, int value) {
    
    if(root==NULL){
        node *temp=new node;
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
        return temp;    
    }
    else{
        if(value<root->data)
            root->left=insert(root->left,value);
        else
            root->right=insert(root->right,value);
        
    return root;
    }
}

node *lca(node *root, int v1,int v2){  

    if(root==NULL)
        return NULL;
    if((root->data<v1)&&(root->data<v2))
       return lca(root->right,v1,v2);
    else if((root->data>v1)&&(root->data>v2))
       return lca(root->left,v1,v2);
    return root;
          
}

node *search(node *root,int data){

    if((root==NULL)||(root->data=data)){
        return root;
    }
    else if(data<root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
}

void inOrder(node *root) {
    if(root!=NULL){
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
        
    }
}

vector<int> inOrder_c(node *root) {
    static vector<int>vt;
    if(root!=NULL){
        
        inOrder_c(root->left);
        vt.push_back(root->data);
        inOrder_c(root->right);
        
    }
    return vt;
}
   
bool checkBST(node* root) {
    vector<int>vt;
    vt=inOrder_c(root);
    int f=1;
    for(int i=1;i<vt.size();i++){
          
        if(vt[i-1]>=vt[i]){
            f=0;
            break;
        }
    }
      return f;
}

int main(int argc, char const *argv[])
{
    node *root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    inOrder(root);
    cout<<endl;
    cout<<lca(root,40,60)->data<<endl;
    cout<<search(root,40)->data;    
    return 0;
}