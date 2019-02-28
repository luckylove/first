#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* arr[26];
};

struct node* newnode(void )
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=0;
    // represents the end of the string
    for(int i=0;i<26;i++)
    {
        newnode->arr[i]=NULL;
    }
    return newnode;
}

void entertree(string st,struct node* root)
{
    struct node* temp=root;
    int i,index;
    for(i=0;i<st.size();i++)
    {
        index=st[i]-'a';
        //cout<<st[i]<<"   ";
        if(temp->arr[index]==NULL)
        {
            temp->arr[index]=newnode();
        }
        temp->data=temp->data+1;
        temp=temp->arr[index];
    }
      temp->data=temp->data+1;
    //cout<<endl;
    return;

}
int searchkey(string st,struct node* root)
{
    struct node* temp=root;
    int i,index;
    int minn=10000000;
    for(i=0;i<st.size();i++)
    {
        index=st[i]-'a';
        //cout<<st[i]<<"   ";
        if(temp->arr[index]==NULL)
        {
            return 0;
        }
        minn=min(minn,temp->data);
        temp=temp->arr[index];
    }
    if(temp!=NULL)
    return min(temp->data,minn);
    else
        return 0;
}
/*
void entertree(string st,int n,int i,struct node* root)
{
    cout<<(char)(st[i]-'a')<<endl;
    if(root->arr[st[i]-'a']==NULL)
    {
        root->arr[st[i]-'a']=newnode();

    }
    root=root->arr[st[i]-'a'];
    if(i==n-1)
    {
        root->endd=1;
        return;
    }
    else
    entertree(st,n,i+1,root->arr[st[i]-'a']);

}

int findstring(string qu,int n,int i,struct node* root)
{
    if(i==n-1)
    {
        if(root->arr[qu[i]-'a']!=NULL&&root->endd==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(root->arr[qu[i]-'a']==NULL)
    {
        return 0;
    }
    else
    {
        return findstring(qu,n,i+1,root->arr[qu[i]-'a']);
    }

}
*/
int main()
{
           int test,a,b,c,d,i,x,j,k,l,m,n,v,q;
            cin>>n>>q;
            string arr[n];
            struct node* root=newnode();
            //cout<<root->endd<<endl;
            // means allocation will beo ok i think
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            // now we need to construct the tree accordingly for it

            // where root is the starting reference node accordingly for it
            // now we need to construct the trie first of all
            for(i=0;i<n;i++)
            {
                entertree(arr[i],root);
            }
            // now root will be changed accordigly for it
             string query;
            while(q--)
            {

              cin>>query;
              cout<<searchkey(query,root)<<endl;

            }


}


