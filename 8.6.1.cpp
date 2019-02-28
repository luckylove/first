// inorder tree traversal inorder without using the recursion accordingly for it
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int key)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void printsimpleinorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printsimpleinorder(root->left);
    cout<<root->data<<"  ";
    printsimpleinorder(root->right);
}
void   printstackinorder(struct node* root)
{
    stack< node*> st;
    if(root==NULL)
    {
        return;
    }
   // st.push(root);
    struct node* temp=root;
    while(!st.empty()||temp!=NULL)
    {
        while(temp!=NULL)
        {
            st.push(temp);
           temp=temp->left;
        }

        if(temp==NULL)
        {
               // a=0;
                temp=st.top();
                st.pop();
                cout<<temp->data<<" ";
               temp=temp->right;




        }

    }
}
int main()
{
    // inorder tree traversal without recursion and without stack accordingly for
    int a,b,c,i,j,k;
    struct node* root=newnode(12);
    root->left=newnode(13);
    root->right=newnode(14);
    root->left->left=newnode(15);
    root->left->right=newnode(16);
    root->right->left=newnode(17);
    root->right->right=newnode(18);
    // now our tree is complete
    printsimpleinorder(root);
   // cout<<endl;
    //cout<<root->right->data<<endl;
   // cout<<endl;
    printstackinorder(root);

}
