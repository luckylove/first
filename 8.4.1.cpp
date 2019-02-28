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
// either i can make the class of the linked list or supplied the
// input as the function to the linkedlist function
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
int getlength(struct node* head)
{
   struct node* temp=head;
   int countt=0;
   while(temp!=NULL)
   {
       countt++;
       temp=temp->next;
   }
   return countt;
}
struct node* reverselinkedlist(struct node* head)
{
    struct node* current=NULL;
    struct node* temp=NULL;
    struct node* prev=NULL;
    current=head;
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    return prev;
}
struct node* reverselist(struct node* head,int k)
{
     struct node*temp;
     // now first of all take the array then store it in the
     int length=getlength(head);
     //cout<<" lenght is "<<length<<endl;
     int rounds= ceil((double)length/k);
     //cout<<" rounds is "<<rounds<<endl;
     struct node* arr[rounds];
     int i=0;
     arr[i]=head;
     i++;
     temp=head;
     int countt=0;
     struct node* prev=NULL;
     while(temp!=NULL)
     {

         countt++;
         if(countt%k==0)
         {
            // cout<<"i is "<<i<<endl;
             arr[i]=temp->next;
             i++;
             //temp->next=NULL;
             //prev=temp;


         }
         temp=temp->next;
         //prev->next=NULL;
     }

     // now we get th entries in our array named arr;
     // now reverse it

     for(i=0;i<rounds-1;i++)
     {
         temp=arr[i];
        while(temp->next!=arr[i+1])
        {
            temp=temp->next;
        }
        temp->next=NULL;
     }

     for(i=0;i<rounds;i++)
     {
         arr[i]=reverselinkedlist(arr[i]);
         //cout<<" something"<<endl;
         printlist(arr[i]);
     }

     temp=arr[0];
     i=1;
     while(i<rounds)
     {
         while(temp->next!=NULL)
         {
             temp=temp->next;

         }
         temp->next=arr[i];
         i++;
     }
     return arr[0];
}
int main()
{

    int test,a,b,c,d,i,j,k,l,n,m,temp,store,x,y,countt;
    struct node* head=newnode(25);
    pushnode(head,2126);
    pushnode(head,2196);
    pushnode(head,216);
    pushnode(head,211);
    pushnode(head,2125);
    pushnode(head,2158);
    pushnode(head,215);
    pushnode(head,22);
    pushnode(head,2635125);

    printlist(head);
    k=3;
   //  cout<<head->next->data<<endl;
    head=reverselist(head,k);

     printlist(head);


}
