#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,a,b,c,d,i,j,k,l,n,m;
    cin>>n>>m;
    long long int arr[n];
    long long int brr[n];
     long long int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
         sum+=arr[i];
    }
    priority_queue< pair <long long int ,int > > pq;
    pair <long long int ,int > some;
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        pq.push(make_pair<long long int,int>(arr[i]*brr[i],i));
    }
    if(sum-m<=0)
    {
        cout<<0<<endl;
    }
    else
    {
    while(m>0)
    {
      some=pq.top();
      pq.pop();
       if(some.first - brr[some.second]>0)
       {
           // then we do something
           some.first=some.first-brr[some.second];
           m--;
           pq.push(some);
       }
       else
       {
           pq.push(some);
           break;
       }

    }
    cout<<pq.top().first<<endl;
    }
}

