#include<bits/stdc++.h>
using namespace std;
struct node
{
    long double x;
    long double y;
    long double r;
};
long double finddistance(struct node a,struct node b)
{
    long double x1=a.x;
    long double  x2=b.x;
    long double  y1=a.y;
    long double  y2=b.y;
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
struct some
{
    long double minn;
    long double maxx;
};
bool compare(struct some a,struct some b)
{
    if(a.minn==b.minn)
    {
        return a.maxx<b.maxx;
    }
    return a.minn<b.minn;
}
int main()
{
    long long int test,i,j,k,l,n,m,r;
    long double a,b,c,d;
    long long q;

    cin>>n>>q;
    struct node arr[n];
    struct some brr[n*(n-1)/2];
    for(i=0;i<n;i++)
    {
        cin>>arr[i].x>>arr[i].y>>arr[i].r;
    }
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           // we need to find out the distanc between both of them
            d=finddistance(arr[i],arr[j]);
            cout<<"dista  is "<<d<<endl;
            if(d>arr[i].r+arr[j].r)
            {
                   brr[k].minn=d-arr[i].r-arr[j].r;
                   brr[k].maxx=d+arr[i].r+arr[j].r;
                   k++;
            }
            else
            {
               brr[k].minn=max((long double)0,max(arr[i].r,arr[j].r)-min(arr[i].r,arr[j].r)-d);
               brr[k].maxx=max(arr[i].r,arr[j].r)+min(arr[i].r,arr[j].r)+d;
               k++;
            }
            cout<<"brr[k].minn"<<brr[k-1].minn<<"brr[k].maxx"<<brr[k-1].maxx<<endl;



        }
    }
    sort(brr,brr+n*(n-1)/2,compare);
    for(i=0;i<n*(n-1)/2;i++)
    {
        cout<<brr[i].minn<<"  "<<brr[i].maxx<<endl;
    }
    while(q--)
    {
        cin>>k;
        int countt=0;
          for(i=0;i<n*(n-1)/2;i++)
            {
                if(k>=brr[i].minn&&k<=brr[i].maxx)
                {
                    countt++;
                }
            }
            cout<<countt<<endl;
    }





}


