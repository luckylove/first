#include<bits/stdc++.h>
using namespace std;
//https://hello-saini.herokuapp.com/
int main()
{
    long long int test,a,b,c,d,i,j,k,l,n,m;
    cin>>n>>m;
    long long int arr[n];
    long long int brr[n];
    // so what we have we have m number of baloons accordingl for it

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    int crr[n];
     priority_queue< pair <long long int ,int > > pq;
     pair <long long int ,int > some;
    for(i=0;i<n;i++)
    {
        crr[i]=brr[i]*arr[i];
        pq.push(make_pair<long long int,int>(crr[i],i));

    }
    int diff=0;
    int index;
    int store=0;
    while(m>0)
    {
        some=pq.top();
        index=some.second;
        pq.pop();
        diff=(some.first-pq.top().first);
        store=(ceil(double(diff)/brr[index]));
        if(diff==0)
        {
            store=1;
        }
        if(store<=m)
        {
           some.first=some.first-store*brr[index];
           if(some.first<0)
           {
               // then we need to break with it
               some.first+=brr[index];
               pq.push(some);
               break;
           }
           m-=store;
           pq.push(some);
        }
        else
        {
            store=m;
            some.first=some.first-store*brr[index];
             m-=store;
              pq.push(some);
            break;
        }


    }
    cout<<pq.top().first<<endl;



}

