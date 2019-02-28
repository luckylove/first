#include <bits/stdc++.h>
using namespace std;
void builttree(vector<int> vt,vector<int> &segment,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        //cout<<"ss"<<endl;
        segment[i+n]=vt[i];
    }
    // now we need to fill up the higher entries accordingly
    for(i=n-1;i>=1;i--)
    {
        //cout<<"tt"<<endl;
        segment[i]=min(segment[2*i],segment[2*i+1]);
    }
    // now our tree is complete
}
void update(vector<int> &segment,int n,int pos,int value)
{

    pos+=n;
    // se that first of all we can update the leaf
    // then move towards the root
    //cout<<"ss"<<endl;
    segment[pos]=value;

   // cout<<"posi s "<<pos<<endl;
    while(pos>1)
    {
       // cout<<"tt"<<endl;
        pos>>=1;
        segment[pos]=min(segment[2*pos],segment[2*pos+1]);

    }
    return;
}
// and to find out the range maximun queries
int findmin(vector<int> segment,int n,int l,int r)
{
    // after that what we can do
    int minn=segment[l+n];
    l+=n;
    r+=n;
    while(l<r)
    {
        if(l&1)
        {
            minn=min(minn,segment[l]);
            l++;
        }
        if(r&1)
        {
            r--;
            minn=min(minn,segment[r]);

        }
        // now both are even
       // minn=min(segment[l],segment[r]);
        l=l/2;
        r=r/2;
    }
    return minn;
}
int main()
{
    int i,j,k,n,m,pos,q,value,l,r,a;
    char b;
    cin>>n>>q;
    vector<int> vt;
    for(i=0;i<n;i++)
    {
        cin>>a;
        vt.push_back(a);
    }

    n=vt.size();

    vector<int> segment(2*n);
    builttree(vt,segment,n);
    for(i=0;i<segment.size();i++)
    {
        cout<<segment[i]<<" ";
    }
    cout<<endl;
    while(q--)
    {
        cin>>b;
        if(b=='u')
        {
            cin>>pos;
            cin>>value;
            pos--;
              update(segment,n,pos,value);

        }
        else
        {
            cin>>l;
            cin>>r;
            l--;
            r--;
            cout<<findmin(segment,n,l,r)<<endl;
        }
    }

}


