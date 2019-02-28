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
struct dis
{
  long double value;
  int index;
};
bool comparesome(struct dis a,struct dis b)
{
    if(a.value==b.value)
    {
        return a.index<b.index;
    }
    return a.value<b.value;
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
     int store[1000000]={0};
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           // we need to find out the distanc between both of them
            d=finddistance(arr[i],arr[j]);
            //cout<<"dista  is "<<d<<endl;
            if(d>arr[i].r+arr[j].r)
            {
                   brr[k].minn=d-arr[i].r-arr[j].r;
                   brr[k].maxx=d+arr[i].r+arr[j].r;
                   store[(int)ceil(brr[k].minn)]++;
                   store[(int)floor(brr[k].maxx)+1]--;
                   k++;
            }
            else
            {
               brr[k].minn=max((long double)0,max(arr[i].r,arr[j].r)-min(arr[i].r,arr[j].r)-d);
               brr[k].maxx=max(arr[i].r,arr[j].r)+min(arr[i].r,arr[j].r)+d;
                store[(int)ceil(brr[k].minn)]++;
                store[(int)floor(brr[k].maxx)+1]--;
               k++;
            }
           // cout<<"brr[k].minn"<<brr[k-1].minn<<"brr[k].maxx"<<brr[k-1].maxx<<endl;



        }
    }

   // sort(brr,brr+n*(n-1)/2,compare);
    /*
    for(i=0;i<n*(n-1)/2;i++)
    {
        cout<<brr[i].minn<<"  "<<brr[i].maxx<<endl;
    }
    */
/*
    struct dis distance[n*(n-1)];
    j=0;
    for(i=0;i<n*(n-1)/2;i++)
    {
        distance[j].value=brr[i].minn;
        distance[j].index=0;
        j++;
        distance[j].value=brr[i].maxx;
        distance[j].index=1;
        j++;
    }
    sort(distance,distance+n*(n-1),comparesome);

    for(i=0;i<n*(n-1);i++)
    {
        if(distance[i].index==0)
        {
              store[(int)ceil(distance[i].value)]++;
        }
        else
        {
            store[(int)floor(distance[i].value)+1]--;
        }
    }
    */
    for(i=1;i<1000000;i++)
    {
        store[i]=store[i]+store[i-1];
        //cout<<store[i]<<" ";
    }
    //cout<<endl;
    while(q--)
    {
        cin>>k;
        int countt=0;
        /*
          for(i=0;i<n*(n-1)/2;i++)
            {
                if(k>=brr[i].minn&&k<=brr[i].maxx)
                {
                    countt++;
                }
                else if(k<brr[i].minn)
                    break;
            }
            */
            countt=store[k];
            cout<<countt<<endl;
    }





}



