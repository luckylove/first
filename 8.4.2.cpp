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

struct node* reverse(struct node* head,int k)
{
     struct node*temp=NULL;
     stack <struct node*> st;

     int countt;
     int i;
     if(head==NULL)
     {
         return head;

     }
    // cout<<"ss"<<endl;
     struct node* store=NULL;
     struct node* newhead;
     int flag=1;
     temp=head;
     while(temp!=NULL)
     {

         countt=0;
          //st.push(head);
         // cout<<"11"<<endl;
         while(temp!=NULL&&countt<k)
         {
           //  cout<<"something"<<endl;
             countt++;
             st.push(temp);
             temp=temp->next;

         }
         //cout<<" here "<<endl;
         // now we need to pop
         if(flag==1)
         {
             newhead=st.top();
             store=st.top();
            // cout<<"headnode->data"<<newhead->data<<endl;
             st.pop();
           //  cout<<" now"<<endl;
             while(st.size()>0)
             {
               //  cout<<"22"<<endl;
               //  cout<<"st.top)->data"<<st.top()->data<<endl;
                store->next=st.top();
                store=store->next;
                st.pop();


             }

             flag=0;
           //  cout<<" here now then"<<endl;

         }
         else
         {
             while(st.size()>0)
             {
                store->next=st.top();
                store=store->next;
                st.pop();


             }
         }

     }
     //cout<<" newhead->data"<<newhead->data<<endl;
     store->next=NULL;
     return newhead;


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
    //cout<<head->next->data<<endl;
    head=reverse(head,k);
    //cout<<head->data<<endl;
    printlist(head);


}
