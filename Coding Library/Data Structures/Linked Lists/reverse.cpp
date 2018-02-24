#include<iostream>
using namespace std;

struct Node
{
     int data;
     struct Node *next;
};

Node *Insert_Tail(Node *head,int data)
{

    Node *temp=new Node;
    temp->data=data;
    temp->next=NULL;
    
    if(head==NULL){
        head=temp;
    }
    else{
        Node *start=head;
        while(start->next != NULL){
            start=start->next;
        }
        start->next=temp;
    }
    return head;
}

Node* reverse_recur(Node *p)
{
  
    if(p->next==NULL){

        return p;
    }
    else{
        Node *NewHead=reverse_recur(p->next);
        p->next->next=p;
        p->next=NULL;
        return NewHead;
    }
}

Node* Reverse_iter(Node *head)
{
  
    Node *curr,*prev,*next;
    curr=head;
    prev=NULL;
    if(head==NULL)
        return NULL;
    else{
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
    }
    head=prev;
    return head;
}

void printList(Node *head){

  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}

int main(int argc, char const *argv[])
{
  int data[]={1,2,3,4,5};
  int n=5;
  Node *head=NULL;
  for(int i=0;i<n;i++){
    head=Insert_Tail(head,data[i]);
  }
  printList(head);
  cout<<endl;
  head=reverse_recur(head);
  head=Reverse_iter(head);
  printList(head);
  return 0;
}