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
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);long long ans=0;
        for(long long i=0;i<n-1;i++)
        {
            if(a[i]>k)
            {
                long long temp=a[i]-k;
                a[i+1]-=temp;
                ans+=k;
            }
            else
            {
                ans+=a[i];
            }
        }
        if(n==1)
            {
                if(a[0]>=k)
                    cout<<k<<endl;
                else
                    cout<<a[0]<<endl;
            }
        else
        cout<<ans+a[n-1]<<endl;
    }
}
