#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node *removeduplicate(Node *head)
{
   Node *curr=head;
   while(curr!=NULL&&curr->next!=NULL)
   {
       if(curr->data==curr->next->data)
       {
           Node *temp=curr->next;
           curr->next=curr->next->next;
           delete(temp);
       }
       else
       curr=curr->next;
   }
   return head;
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(20);
	printlist(head);
	head=removeduplicate(head);
	printlist(head);
	return 0;
}

