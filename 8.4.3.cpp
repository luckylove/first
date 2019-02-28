#include<bits/stdc++.h>
using namespace std;
// i need to make the function by my own
struct node
{
    int data;
    struct node* next;
};

struct node* newnode(int key)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next=NULL;
    return newnode;
}
void pushnode(struct node* head,int data)
{
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next = newnode(data);
}
void printlist(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
struct node* makelinkedlist(int* arr, int n)
{
    struct node* head=newnode(arr[0]);
    struct node* temp=head;
    int i;
    for(i=1;i<n;i++)
    {
        temp->next=newnode(arr[i]);
        temp=temp->next;
    }
    return head;
}
struct node* segregate(struct node* head)
{
    if(countt)
    {
        return head;
    }
    if((head->data)%2==0)
    {
        head->next=segregate(head->next);
        return head;
    }
    else
    {
        // move that node at the end then tall for the rest
       struct node* temp=head;
       while(temp->next!=NULL)
       {
         temp=temp->next;
       }
       struct node* store=head->next;
       head->next=NULL;
       temp->next=head;
       head=store;
       return segregate(head);

    }
}
int main()
{
    int test,a,b,c,d,i,j,k,m,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }

            struct node* head = makelinkedlist(arr,n);
          //  printlist(head);
          // segregate even and the odd nodes accordingly for it
          head=segregate(head);
          printlist(head);



    }
}
