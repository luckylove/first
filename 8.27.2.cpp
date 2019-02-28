#include <bits/stdc++.h>
using namespace std;
// range maximum tree
// so this the iterative segment tree accordingly for it basically what to say
// next regarding all these things to me and to all
// now we move towards recursive implementation of the segment tree accordingly
// for it basically what to say something about these things to me and to all
void builttree(vector<int> vt,vector<int> &segment,int n)
{
    // no need to allocat

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
        segment[i]=segment[2*i]+segment[2*i+1];
    }
    // now our tree is complete
}
void update(vector<int> &segment,int n,int pos,int value)
{
    // we need to update the things accordingly for it
    pos+=n;
    // se that first of all we can update the leaf
    // then move towards the root
    cout<<"ss"<<endl;
    segment[pos]=value;

    //cout<<"posi s "<<pos<<endl;
    while(pos>1)
    {
        //cout<<"tt"<<endl;
        pos>>=1;
        segment[pos]=segment[2*pos]+segment[2*pos+1];

    }
    return;
}
// and to find out the range maximun queries
int findmax(vector<int> segment,int n,int l,int r)
{
    int maxx=0;
    l+=n;
    r+=n;
    while(l<r)
    {
        if(l&1)
        {
            maxx+=segment[l];
            l++;
        }
        if(r&1)
        {
            r--;
            maxx+=segment[r];

        }
        // now both are even

        l=l/2;
        r=r/2;
    }
    return maxx;
}
int main()
{
    int i,j,k,n,m,pos,q,value,l,r,a;
    vector<int> vt={2,9,6,8,3,5,6,2,4,8,1,2,5,6,3};
    n=15;
    // now we need to make the vector of the segement
    for(i=0;i<15;i++)
    {
        cout<<vt[i]<<" ";
    }
    cout<<endl;
    vector<int> segment(2*n);
    builttree(vt,segment,n);
    q=10;
    for(i=0;i<segment.size();i++)
    {
        cout<<segment[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the queries"<<endl;
    while(q--)
    {
        cin>>a;
        if(a&1)
        {
            cin>>pos;
            cin>>value;
            update(segment,n,pos-1,value);
             for(i=0;i<segment.size();i++)
            {
                cout<<segment[i]<<" ";
            }
            cout<<endl;

        }
        else
        {
            cin>>l;
            cin>>r;
            l--;
            cout<<findmax(segment,n,l,r)<<endl;
        }
    }

}


