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
ListNode* deleteDuplicates(ListNode* A) {
    ListNode *curr, *next, *prev;
    prev = NULL;
    curr = A;
    while(curr->next!=NULL){
        if(curr->val == curr->next->val){
            //cout<<curr->val<<" "<<prev->val<<endl;
            while(curr->next!=NULL && curr->val==curr->next->val){
                curr = curr->next;
            }
            if(prev == NULL){
                A = curr->next;
            }
            else{
                prev->next = curr->next;
            }
            if(curr->next == NULL)
                return A;
            else
                curr = curr->next;
            
        }
        else{
            prev = curr;
            curr = curr->next;
        }
        
    }
    return A;
}

int main(){
    int val[]={1,1,1,1,2,2};
    int n=6;
    ListNode *head=NULL;
    for(int i=0;i<n;i++){
        head=Insert_Tail(head,val[i]);
    }
    printList(head);
    head = deleteDuplicates(head);
    printList(head);
}
