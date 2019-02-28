#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node* arr[26];
};
struct node* newnode(char c)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<26;i++)
    {
        newnode->arr[i]=NULL;
    }
    return newnode;
};
int main()
{
    int test,a,b,c,m;
    int i,j,k,l;
    int n;
    cin>>n;
    string arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        // we make the tree
        m=arr.size();
        // we need to insert it again and and again

    }
}
