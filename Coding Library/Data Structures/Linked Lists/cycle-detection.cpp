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

bool has_cycle(Node* head) {
    
    Node *p1=head,*p2=head->next;
    while((p1!=NULL)&&(p2!=NULL)){
        if(p1==p2)
            return true;
        else{
            p1=p1->next;
            p2=(p2->next)?(p2->next->next):p2->next;
        }
    }
    return false;
}



int main(int argc, char const *argv[])
{
  int data[]={1,2,2,2,5};
  int n=5;
  Node *head=NULL;
  for(int i=0;i<n;i++){
    head=Insert_Tail(head,data[i]);
  }
  if(has_cycle(head))
    cout<<"Cycle Detected";
  else
    cout<<"No Cycle";
  return 0;
}