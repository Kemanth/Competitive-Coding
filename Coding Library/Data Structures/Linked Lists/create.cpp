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

Node *Insert_Head(Node *head,int data)
{
  
    Node *temp=new Node;
    temp->data=data;
    temp->next=head;
    return temp;
}

Node *InsertNth(Node *head, int data, int position)
{
  
    Node *temp=new Node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        Node *start=head;
        if(position ==0){
            temp->next=head;
            return temp;
        }
        else{
            for(int i=0;i<position-1;i++)
                start=start->next;
            temp->next=start->next;
            start->next=temp;
        }
    }
    return head;
}

Node* Delete(Node *head, int position)
{

    Node *start=head;
    if(head->next==NULL)
        return NULL;
    else if(position==0)
        head=head->next;
    else{
        for(int i=0;i<position-1;i++){
            start=start->next;
        }
        start->next=start->next->next;
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
  int data[]={2,4,1,5,6};
  int n=5;
  Node *head=NULL;
  for(int i=0;i<n;i++){
    head=Insert_Tail(head,data[i]);
  }
  head=Insert_Head(head,0);
  head=InsertNth(head,3,3);
  head=Delete(head,0);
  printList(head);
  return 0;
}