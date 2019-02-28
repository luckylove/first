
int findmax(struct node* root)
{
    int res=INT_MIN;
    // res basically stores the maximum sum of the path
    // that we get at the particular tree accordingly for it

    findmax(root,res);
    return res;
}
int  findmax(struct node* root, int &res)
{
    if(root==NULL)
    {
        return 0;
    }
    //
    int l=findmax(root->left,res);
    int r=findmax(root->right,res);
    int temp1= max(max(l,r)+root->data,root->data);
    int temp=max(temp1,l+r+root->data);
    res=max(res,temp);
    // that is the maximum path that we get while considering only
    // this particular part of something something accordingly for it
    return temp;
}
