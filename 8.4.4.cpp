#include<bits/stdc++.h>
using namespace std;
// i need to make the function by my own
// it will not work what to do next
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
    // get the pointer
    // pointer to the last node
    struct node* last=head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    struct node* store=last;
    struct node* temp=head;
    struct node* prev=NULL;
    int flag=1;
    struct node* storee;
    while(temp!=store)
    {
        if(flag==1)
        {
            if((temp->data)%2!=0)
            {
               storee=temp;
               temp=temp->next;
               storee->next=NULL;
               last->next=storee;
               last=last->next;


            }
            else
            {
                head=temp;
                // first even node
                prev=head;
                temp=temp->next;
                flag=0;
            }
        }
        else
        {
           if((temp->data)%2!=0)
            {
               storee=temp;
               temp=temp->next;
               storee->next=NULL;
               last->next=storee;
               last=last->next;


            }
            else
            {
                prev->next=temp;
                prev=prev->next;
                temp=temp->next;

            }
        }
        cout<<"head is ";
        printlist(head);
        cout<<"prev is ";
        printlist(prev);
        cout<<"last is ";
        printlist(last);
        cout<<"store is ";
        printlist(store);
        printlist(temp);
    }
    if((store->data)%2!=0)
    {
        // now we need to move this node at the last
        //prev=store->next;
        store->next=NULL;
        last->next=store;
    }
    else
    {
        prev->next=store;
    }
       cout<<"head is ";
        printlist(head);
        cout<<"prev is ";
        printlist(prev);
        cout<<"last is ";
        printlist(last);
        cout<<"store is ";
        printlist(store);
        printlist(temp);
    return head;


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
