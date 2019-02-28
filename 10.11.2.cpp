// you can do it now shubham
#include<bits/stdc++.h>
# define ll long long
using namespace std;
struct node
{
    ll pro;
    ll b;
};
bool compare(node n,node m)
{
    if(n.pro==m.pro)
    {
        return n.b<m.b;
    }
    return n.pro<m.pro;
}
ll findsome(node* product ,ll n, ll mid)
{
    int i,j;
    ll some=0;
    for(i=mid+1;i<n;i++)
    {
        //some+=ceil((double)(product[i].pro-product[mid].pro)/product[i].b);
        if((product[i].pro-product[mid].pro)%product[i].b==0)
        {
           some+=(product[i].pro-product[mid].pro)/product[i].b;
        }
        else
        {
            some+=(product[i].pro-product[mid].pro)/product[i].b;
            some++;
        }

    }
    return some;
}
void dofinalthings(node* product,ll n,ll mid,ll m)
{
    // dofinal things
   // cout<<"now we are in dofinalthings"<<endl;
   // cout<<"mid is "<<mid<<endl;
    ll countt=0;
    ll i,j;
    for(i=mid+1;i<n;i++)
    {
        // what we are trying to do is just do certain calculation
        if((product[i].pro-product[mid].pro)%product[i].b==0)
        {
           countt =(product[i].pro-product[mid].pro)/product[i].b;
        }
        else
        {
            countt =(product[i].pro-product[mid].pro)/product[i].b;
            countt++;
        }
        //countt=ceil((double)(product[i].pro-product[mid].pro)/product[i].b);
                if(countt>=m)
                 {
                     product[i].pro=product[i].pro-product[i].b*m;
                     m=0;
                    // cout<<"m is converted to zero"<<m<<endl;
                     break;
                 }
                 else
                 {
                     product[i].pro=product[i].pro-product[i].b*countt;
                     m=m-countt;
                 }
    }
    // if still m is greater then m>0
    if(m>0)
    {
        //cout<<"m is "<<m<<endl;
        product[mid].pro=product[mid].pro-product[mid].b;
        m--;
        if(m>0)
        dofinalthings(product,n,mid,m);
    }
    return ;
}
void dosearch(node* product,ll n,ll start,ll endd,ll m)
{
   while(start<=endd)
   {
       ll mid=start +(endd-start)/2;
       //cout<<"mid is "<<mid<<endl;
       ll some=findsome(product,n,mid);
      // cout<<"some that we get is "<<some<<endl;
       if(some==m||(mid==start&&some<m))
       {
           // means we are getting the things
           dofinalthings(product,n,mid,m);
           break;
       }
       if(some>m)
       {
           // we need to just shipt right side
          // cout<<"shifting right side"<<endl;
           //dosearch(product,n,mid+1,endd,m);
           start=mid+1;
       }
       else
       {
          // cout<<"shifging left side"<<endl;
           //dosearch(product,n,start,mid-1,m);
           endd=mid-1;
       }
   }
}
int main()
{
    ll test,a,b,c,d,i,j,k,l,n,m;
    cin>>n>>m;
    ll arr[n];
    ll brr[n];
    node product[n];
    ll total=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        product[i].pro=arr[i]*brr[i];
        product[i].b=brr[i];
    }
        sort(product,product+n,compare);
   // cout<<"initially we get is "<<endl;
        for(i=0;i<n;i++)
        {
            //cout<<product[i].pro<<"    "<<product[i].b<<endl;
        }
    if(total<=m)
    {
        cout<<0<<endl;
    }
    else
    {
        dosearch(product,n,0,n-1,m);
        //cout<<"now we are again inthe main funciton"<<endl;
        ll maxx=0;
        for(i=0;i<n;i++)
        {
           // cout<<product[i].pro<<"    "<<product[i].b<<endl;
            maxx=max(maxx,product[i].pro);
        }
        cout<<maxx<<endl;

    }


}


