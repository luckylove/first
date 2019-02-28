#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,i,j,k,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        sort(arr,arr+n);
        priority_queue<int> pq;
        long long int sum=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>k)
            {
                pq.push(arr[i]-k);
                sum+=arr[i]-k;
            }
        }
        int one;
        int two;
        int diff;
        while(pq.size()>1)
        {
            one=pq.top();
            pq.pop();
            one--;
            two=pq.top();
            pq.pop();
            two--;
            //diff=one-two;
            if(one>0)
            pq.push(one);
            if(two>0)
            pq.push(two);

        }
        if(pq.size()==1)
        {
            one=pq.top();
            cout<<accumulate(arr,arr+n,0)-sum-one<<endl;
        }
        else
        {
            cout<<accumulate(arr,arr+n,0)-sum<<endl;
        }


    }

}

