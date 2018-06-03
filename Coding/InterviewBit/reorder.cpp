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
ListNode* merge(ListNode* A, ListNode* B) {
    ListNode *root = new ListNode(0), *rootptr;
    if(A == NULL)
        return B;
    else if(B == NULL)
        return A;

    rootptr = root;

    while(A && B){
        if(A->val <= B->val){
            root->next = A;
            A = A->next;
        }
        else{
            root->next = B;
            B = B->next;
        }
        root = root->next;
    }
    while(A){
        root->next = A;
        A = A->next;
        root = root->next;
    }
    while(B){
        root->next = B;
        B = B->next;
        root = root->next;
    }
    return rootptr->next;
}
void splitList(ListNode *head, ListNode **a, ListNode **b){
    ListNode *slow = head, *fast = head->next;
    while(fast){
        fast = fast->next;
        if(fast){
            slow = slow->next;
            fast = fast->next;
        }
    }
    *a = head;
    *b = slow->next;
    slow->next = NULL;

}
ListNode* sortList(ListNode* A) {

    ListNode *head, *a, *b;
    head = A;
    if(head == NULL || head->next == NULL)
        return head;

    splitList(head,&a,&b);
    sortList(a);
    sortList(b);
    head = merge(a,b);
    return head;
}

int main(){
    int val[]={1,5,2,1,2,5};
    int n=6;
    ListNode *head=NULL;
    for(int i=0;i<n;i++){
        head=Insert_Tail(head,val[i]);
    }
    printList(head);
    head = sortList(head);
    printList(head);
}
