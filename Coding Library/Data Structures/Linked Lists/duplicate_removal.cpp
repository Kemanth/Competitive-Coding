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

Node* RemoveDuplicates(Node *head)
{
  
    Node *p1=head;
    if(head==NULL)
        return NULL;
    while(p1->next!=NULL){
        if(p1->data==p1->next->data){
            p1->next=p1->next->next;
        }
        else
            p1=p1->next; //important only advance if no deletion coz its already advanced
    }
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
  int data[]={1,2,2,2,5};
  int n=5;
  Node *head=NULL;
  for(int i=0;i<n;i++){
    head=Insert_Tail(head,data[i]);
  }
  printList(head);
  cout<<endl;
  head=RemoveDuplicates(head);
  printList(head);
  return 0;
}