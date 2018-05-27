#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

void printList(ListNode *head){

  while(head!=NULL){
    cout<<head->val<<" ";
    head=head->next;
  }
  cout<<endl;

}
ListNode *Insert_Tail(ListNode *head,int val)
{

    ListNode *temp=new ListNode(val);

    if(head==NULL){
        head=temp;
    }
    else{
        ListNode *start=head;
        while(start->next != NULL){
            start=start->next;
        }
        start->next=temp;
    }
    return head;
}
ListNode* reverseBetween(ListNode* A, int B, int C) {
    ListNode *curr, *prev, *next, *start1, *start2, *end1, *end2;
    prev = NULL;
    if(A==NULL)
        return NULL;
    curr = A;
    for(int i=0;i<B-1;i++){
        prev = curr;
        curr = curr->next;
    }
    start1 = prev;
    start2 = curr;

    for(int i=0;i<C-B+1;i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    end1 = prev;
    end2 = curr;

    if(start1 == NULL){
        start2->next = end2;
        return end1;
    }
    else{
      start1->next = end1;
      start2->next = end2;
    }

    return A;
}


int main(){
    int val[]={1,2,3,4,5};
    int n=5;
    ListNode *head=NULL;
    for(int i=0;i<n;i++){
        head=Insert_Tail(head,val[i]);
    }
    printList(head);
    head = reverseBetween(head,1,5);
    printList(head);
}
