

void connect(Node *p)
{
    Node* temp=NULL;
    if(p==NULL)
    {
        return;
    }
    queue < Node* > qu;
    temp=p;
    Node* flag=NULL;
    qu.push(temp);
    qu.push(flag);
    Node* store=NULL;
    Node* prev=NULL;
    int a=1;
    while(!qu.empty())
    {
        store=qu.front();
        qu.pop();

        if(prev!=NULL&&a==0)
        {
            prev->nextRight=store;
            // cout<<"ss"<<prev->data<<endl;
        }

        if(store==NULL&&qu.empty())
        {

         break;
        }
        else if(store==NULL)
        {
            a=1;
           // prev->nextRight=store;
           qu.push(flag);
        }
        else
        {
            a=0;
            if(store->left!=NULL)
            {
                qu.push(store->left);
            }
            if(store->right!=NULL)
            {
                qu.push(store->right);
            }
            prev=store;
        }
    }
