#include<bits/stdc++.h>
using namespace std;
// whenever use the priority queue chutiya katna start

struct node
{
    char ch;
    int freq;
    struct node* left;
    struct node* right;
};
struct compare {

	bool operator()(struct node* l, struct node* r)

	{
		return (l->freq >=  r->freq);
	}
};
struct node* newnode(char c,int f)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->ch=c;
    newnode->freq=f;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}
void dotraversal(struct node* root,int* crr,int index)
{
    if(root->left==NULL&&root->right==NULL)
    {
        for(int i=0;i<index;i++)
        {
            cout<<crr[i];
        }
        cout<<" ";
    }
    if(root->left!=NULL)
    {
        crr[index]=0;
        dotraversal(root->left,crr,index+1);
    }
    if(root->right!=NULL)
    {
        crr[index]=1;
        dotraversal(root->right,crr,index+1);
    }


}
int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    char arr[27];
    cin>>test;
    while(test--)
    {
        cin>>arr;
        n=strlen(arr);
        int indexofelement[28]={0};
        for(i=0;i<n;i++)
        {
            indexofelement[arr[i]-'a']=i;
        }
        int brr[n];
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }

        //lets take the priority queue
        pair < int ,struct node* > one;
        pair < int ,struct node* > two;
        int freq1;
        int freq2;
        priority_queue< pair< int ,struct node*>,vector< pair< int ,struct node*> >, compare > pq;
        for(i=0;i<n;i++)
        {
            pq.push(make_pair(brr[i],newnode(arr[i],brr[i])));
        }
        while(!pq.empty())
        {
            one=pq.top();
            pq.pop();
            if(!pq.empty())
            {
                two = pq.top();
                pq.pop();
                // now we need to do certain things here for all
                // ans to me and to al
                freq1=one.first;
                freq2=two.first;
                struct node* newnode1=newnode('#',freq1+freq2);
                /*
                if(freq1==freq2)
                {
                    // then we need to check which element comes firstly
                    // in the inpul array accordingly for it
                    if((one.second)->ch!='#'&&(two.second)->ch=='#')
                    {
                         newnode1->left=two.second;
                         newnode1->right=one.second;
                    }
                    else if(indexofelement[(two.second)->ch]<indexofelement[(one.second)->ch])
                    {
                          newnode1->left=two.second;
                         newnode1->right=one.second;
                    }
                    else
                    {
                         newnode1->left=one.second;
                         newnode1->right=two.second;
                    }
                }
                */
                //else
               // {
                    newnode1->left=one.second;
                    newnode1->right=two.second;
                //}

                pq.push(make_pair(freq1+freq2,newnode1));

            }
            else
            {
                break;
            }

        }
      //  cout<<one.first<<endl;
        int crr[100];
        int index=0;
        // now one.second is the root node
        dotraversal(one.second,crr,index);
        cout<<endl;

    }
}











