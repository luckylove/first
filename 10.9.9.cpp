#include<bits/stdc++.h>
using namespace std;

struct node
{
    long long int value;
    long long int be;
    int index;
};
struct compare
 {
   bool operator()(const struct node& a1, const struct node& a2)
   {
    if(a1.value==a2.value)
    {
        return a1.be>a2.be;
    }
    return a1.value>a2.value;
   }
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
        /*
        while(!pq.empty())
        {
           temp=pq.top();
           pq.pop();
           cout<<temp.value<<"    "<<temp.be<<"    "<<temp.index<<endl;
        }
        */
        long long int remaining=sum-m;
        cout<<"remaining is "<<remaining<<endl;
       struct node some;
       int index;
        while(remaining--)
        {
           some=pq.top();
           pq.pop();
           cout<<"some.first is "<<some.value<<" svome.second is "<<some.index<<endl;
           index=some.index;

           some.value+=brr[index];
           cout<<"here some.value is "<<some.value<<endl;
           maxx=max(maxx,some.value);
           arr[index]--;
           cout<<"arr[index i"<<arr[index]<<endl;
           if(arr[index]>0)
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



