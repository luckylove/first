// diagonal traversal of the binary tree i need to do that
// by using the hash map as well as the queue accordingly for it

#include<bits/stdc++.h>
using namespace std;
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void convert(node *head,TreeNode * &root);
void lvl (TreeNode *r)
{
    if(r==NULL)
        return;
    queue<TreeNode *> q;
    q.push(r);
    while(!q.empty())
    {
        TreeNode * j = q.front();
        cout<<j->data<<" ";
        q.pop();
        if(j->left)
            q.push(j->left);
        if(j->right)
            q.push(j->right);
    }
}
void reverses(node **head)
{
    node *prev=NULL;
    node *cur = *head;
    node *nxt;
    while(cur!=NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *head = prev;
}
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct node *head = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            push(&head,l);
        }
        reverses(&head);
    TreeNode *root=NULL;
    convert(head,root);
if(root==NULL)
cout<<"-1";
lvl(root);
cout<<endl;
   // inorder(root);
    getchar();
    }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of Link list node is as follows
struct node
{
    int data;
    struct node* next;
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/
/*You are required to complete this method*/
struct TreeNode* makenewnode(int key)
{
    struct TreeNode* newnode= (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newnode->data=key;
    newnode->left=NULL;
    newnode->right=NULL;
    cout<<"ss"<<endl;
    return newnode;
}
void convert(node *head,TreeNode * &root)
{
  if(head==NULL)
  {
      return;
  }
  queue <int> qu;
  int countt=0;
  while(head!=NULL)
  {
      countt++;
      qu.push(head->data);
      head=head->next;
  }
  cout<<countt<<endl;
  queue< TreeNode*> store;
  struct TreeNode* temp=NULL;
  root=
  store.push(root);
  temp=root;
  int temp1;
  temp=root;
  while(!qu.empty())
  {
      cout<<"ss"<<endl;
      temp=store.front();
      store.pop();

      temp1=qu.front();
      qu.pop();
        cout<<"pp"<<endl;
      temp->left=makenewnode(temp1);
      cout<<"asdfasdf"<<temp->left->data<<endl;
      store.push(temp->left);
      cout<<"tt"<<endl;
      if(!qu.empty())
      { cout<<"tt"<<endl;
           temp1=qu.front();
          qu.pop();

          temp->right=makenewnode(temp1);
          store.push(temp->right);
      }


  }

}


