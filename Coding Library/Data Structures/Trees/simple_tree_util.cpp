#include<iostream>
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

void inOrder(Node *root) {
    if(root!=NULL){
        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
        
    }
}

int tree_Size(Node * root){
	
	static int count=0;

	if(root!=NULL){
        
        tree_Size(root->left);
        count++;
        tree_Size(root->right);
        
    }
    return count;
}

int identical(Node * root1, Node * root2){

	if(root1 == NULL && root2 == NULL)
		return 1;

	else if(root1 != NULL && root2 != NULL){
		return (root1->data == root2->data) && identical(root1->left,root2->left) && identical(root1->right,root2->right) ;		
	}
	else
		return 0;
}

void delete_Tree(Node * root){   //delete in postorder traversal

	if(root!=NULL){
        
        delete_Tree(root->left);
        delete_Tree(root->right);
        cout<<"Deleting data "<<root->data<<endl;
        delete root;
    }
}

void mirror(Node * root){ // postorder traversal

	if(root == NULL)
		return;
	else{
		Node *temp;
		mirror(root->left);
		mirror(root->right);
		temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
}

Node *copy(Node *root){

	Node * temp = new Node;

	if(root == NULL)
		return NULL;
	else{
		temp->data = root->data;
		temp->left = copy(root->left);
		temp->right = copy(root->right);
	}

	return temp;
}

int num_Leaves(Node * root){

	static int count=0;

	if(root != NULL){

		num_Leaves(root->left);
		if(root->left == NULL && root->right == NULL)
			count++;
		num_Leaves(root->right);
	}

	return count;
}

int main(int argc, char const *argv[])
{
	Node *root1 = create_Node(1);
	root1->left = create_Node(2);
    root1->right = create_Node(3);
    root1->left->left = create_Node(4);
    root1->left->right = create_Node(5);

    Node *root2 = create_Node(1);
	root2->left = create_Node(2);
    root2->right = create_Node(3);
    root2->left->left = create_Node(4);
    root2->left->right = create_Node(5);
    
    cout<<tree_Size(root1)<<endl;
    //delete_Tree(root1);
    cout<<identical(root1,root2)<<endl;
    mirror(root1);
    inOrder(root1);
    cout<<endl;
    Node * root3 = copy(root1);
    inOrder(root3);
    cout<<endl;
    cout<<num_Leaves(root1)<<endl;
	return 0;
}	