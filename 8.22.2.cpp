struct Node* newnode(int key)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=key;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct some
{
  Node* node;
  int max;
  int min;
};
Node* constructBst(int arr[], int n)
{
    if(n==0)return NULL;
    // Code here
    // we need to create the root or we need to return the root accordingly for it what to say next aout this
    Node* root=newnode(arr[0]);
    Node* store1=NULL;
    queue <struct some> qu;
    struct some temp;
    temp.node=root;
    temp.max=1000;
    temp.min=-10;
    struct some too;
    int i,j,k,a,b,c;
    int store,countt;
    qu.push(temp);
    i=1;
    while(i<n)
    {
        temp=qu.top();
        qu.pop();
        if(arr[i]<(temp.node)->data)
        {
            store1=newnode(arr[i]);
            (temp.node)->left=store1;
            too.node=store1;
            too.min=temp.min;
            too.max=(temp.node)->data;
            qu.push(too);
            // now this the left child completed
            // now check for the right
            i++;
            if(i<n)
            {
                if(arr[i]>(temp.node)->data  && arr[i]<temp.max)
                {
                    store1=newnode(arr[i]);
                    (temp.node)->right=store1;
                    too.node=store1;
                    too.min=(temp.node)->data;
                    too.max=temp.max;
                    qu.push(too);
                    i++;
                }
                else
                {
                    break;
                }
            }

        }
        else if(arr[i]>(temp.node)->data   && arr[i]<temp.max)
        {
                    store1=newnode(arr[i]);
                    (temp.node)->right=store1;
                    too.node=store1;
                    too.min=(temp.node)->data;
                    too.max=temp.max;
                    qu.push(too);
                    i++;
        }

    }
	return root;
}














