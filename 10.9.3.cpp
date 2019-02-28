#include<bits/stdc++.h>
using namespace std;
// theproblem encountering here is that the value of m is very large accordingly for it
int main()
{
    long long int test,a,b,c,d,i,j,k,l,n,m;
    cin>>n>>m;
    long long int arr[n];
    long long int drr[n];
    long long int brr[n];
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        drr[i]=arr[i];
        sum+=arr[i];
    }
    long long int remaining = sum-m;
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    // i need to minimize the maximum value to give the candies

    if(remaining<=0)
    {
        cout<<0<<endl;
    }
    else
    {
        priority_queue< pair <long long int ,int > > pq;
         pair <long long int ,int > some;
        for(i=0;i<n;i++)
        {
            pq.push(make_pair<long long int,int>(arr[i]*brr[i],i));
        }
        cout<<remaining<<endl;
        remaining =m;
        while(remaining>0)
        {
               some=pq.top();
               pq.pop();
               cout<<"some.first"<<some.first<<endl;
               some.first=some.first-brr[some.second];
                              cout<<"some.first"<<some.first<<endl;

               arr[some.second]--;
               cout<<"some.second"<<arr[some.second]<<endl;
               remaining--;
               pq.push(some);
        }

        /*
        long long int myans=0;
        for(i=0;i<n;i++)
        {
            myans=max(myans,(drr[i]-arr[i])*brr[i]);
        }
        cout<<myans<<endl;
        */

    }
}
/*

        while(remaining>0)
        {
          some=pq.top();
          pq.pop();
               some.first=some.first-brr[some.second];
               arr[some.second]--;
               remaining--;
               pq.push(some);
        }
        long long int myans=0;
        for(i=0;i<n;i++)
        {
            myans=max(myans,(drr[i]-arr[i])*brr[i]);
        }

    }
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
*/

