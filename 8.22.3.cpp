#include<bits/stdc++.h>
using namespace std;
// i need to find out the lowest common ancestor int he bst
// binary search tree accordingly for it
// basically what to say next about all these situations for all ans to me
// ans to all
// i will definitely give it but not now accordingly for it
// after the huge time accordingly for it basically what to say next about all these things to me and to all

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
while(1)
{
    if(root1)
    {
        // means root 1 does not equals to null
        st.push(root1)
       root1=root1->next;
       // about these things accordingly for it
        }
    }
    // we
    }
}
void doinorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<struct node*> st;
    st.push(root);
    struct node* temp;
    while(!st.empty())
    {
      temp=st.top();
      while(temp->left!=NULL)
      {
          st.push(temp->left);
          temp=temp->left;
      }
      temp=st.top();
      st.pop();
      cout<<temp->data<<"  ";
      if(temp->right)
      {
          st.push(temp->right)
      }

    }
}
int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,countt,sum;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    }
}
