#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][2];
        int ar[51]={0};
        for(int i=0;i<n;i++)
            {cin>>a[i][0];
            ar[a[i][0]]++;
            a[i][1]=0;
            }
            if(n==1)
            {
                cout<<0<<endl;
                cout<<a[0][0];
                cout<<endl;
                continue;
            }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(a[i][0],a[j][0])==1)
                {
                    a[i][1]=1;a[j][1]=1;
                }
            }
        }
        bool cond=false;
        for(int i=0;i<n;i++)
        {
            if(a[i][1]==0)
            {
                cond=true;break;
            }
        }
        if(cond)
        {
                 if(a[0][0]==47)
                    a[n-1][0]=43;
                    else
                        a[n-1][0]=47;

            cout<<1<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i][0]<<" ";
            cout<<endl;
        }
        else
        {

            cout<<0<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i][0]<<" ";
                cout<<endl;
        }
    }
}
