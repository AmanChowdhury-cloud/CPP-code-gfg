#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;
Node(int x)
{
    data=x;
    next=NULL;
}
};
Node *insertbegin(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else
    {
        Node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
Node *delHead(Node *head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}
Node *deleteKth(Node *head,int k){
    if(head==NULL)return head;
    if(k==1)return deleteHead(head);
        Node *curr=head;
    for(int i=0;i<k-2;i++)
        curr=curr->next;
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}
void printlist(Node *head)
{
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    for(Node *p=head->next;p!=head;p=p->next)
        cout<<p->data<<" ";
}

int main()
{
    	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head;

}
