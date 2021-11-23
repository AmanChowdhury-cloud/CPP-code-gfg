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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int print_N_from_last(Node* head,int n)
{
    Node* first=head;
    if(head==NULL)
          return NULL;

    for(int i=0;i<n;i++)
    {
        if(first==NULL)

            return NULL;

        first=first->next;

    }
    Node* second =head;
    while(first!=NULL)
    {
        second=second->next;
       first= first->next;
    }
    return (second->data);

}
Node* takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newnode= new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;//tail=newnode;
        }

        cin>>data;
    }
    return head;
}
int main()
{
    Node* head=takeinput();
    print(head);
     int ans=print_N_from_last(head,2);
  if(ans==NULL)
    cout<<endl<<"Wrong";
  else
    cout<<endl<<ans;

}

