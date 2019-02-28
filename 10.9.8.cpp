#include<bits/stdc++.h>
using namespace std;
struct compare
 {
   bool operator()(const struct node& a1, const struct node& a2)
   {
    if(a1.value==a2.value)
    {
        return a1.be<a2.b;
    }
    return a1.value<a2.value;
   }
 };
struct node
{
    long long int vlaue;
    long long int be;
    int index;
};
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
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }

    if(sum>m)
    {
        long long int maxx=0;
        struct node temp;
         priority_queue< struct node, vector<struct node> , compare > pq;
        for(i=0;i<n;i++)
        {
             temp.value=0;
             temp.be=brr[i];
             temp.index=i;
             pq.push(temp);
        }
        // accordingly for it
        while(!pq.empty())
        {
           temp=pq.pop();
           cout<<temp.value<<"    "<<temp.be<<"    "<<temp.index<<endl;
        }
        long long int remaining=sum-m;
        // these remaining time we need to find out something
        cout<<"remaining is "<<remaining<<endl;
       struct node some;
       int index;
        while(remaining--)
        {
           some=pq.top();
           pq.pop();
           cout<<"some.first is "<<some.first<<" some.second is "<<some.second<<endl;
           index=some.second;
           some.first+=brr[index];
           maxx=max(maxx,some.first);
           arr[index]--;
           if(arr[i]>0)
           {
               pq.push(some);
           }
        }
        cout<<maxx<<endl;

    }
    else
    {
        cout<<0<<endl;
    }
}
/*


    priority_queue< pair <long long int ,int > > pq;
    pair <long long int ,int > some;
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        pq.push(make_pair<long long int,int>(arr[i]*brr[i],i));
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

