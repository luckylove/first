#include<bits/stdc++.h>
using namespace std;
main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        for(long long i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        long long ans=0;
        long double  sum=0;
        for(long long i=0;i<n-1;i++)
        {
            if(arr[i]>k)
            {
               sum+=(arr[i]-k);
            }
        }
        cout<<"sum is "<<sum<<endl;
        int store=ceil(sum/2);
                cout<<"store is "<<store<<endl;

        store=store*2;
        cout<<"store i s"<<store<<endl;
        sum=accumulate(arr,arr+n,0);
        /*
        if(n==1)
            {
                if(arr[0]>=k)
                    cout<<k<<endl;
                else
                    cout<<arr[0]<<endl;
            }
        else
            */
        cout<<sum-store<<endl;
    }
}
