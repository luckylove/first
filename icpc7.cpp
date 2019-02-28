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
        vector<int> vt;
        long long int sum=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>k)
            {
                pq.push(arr[i]-k);
                //vt.push_back(arr[i]-k);
                sum+=arr[i]-k;
            }
        }
        int last=arr[n-1];
        int one;
        int two;
        int diff;
        while(pq.size()>1)
        {

            one=pq.top();
            pq.pop();
            two=pq.top();
            pq.pop();
            diff=one-two;
            if(diff==0)
            {
                diff=1;
            }
            one-=diff;

            two-=diff;

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


