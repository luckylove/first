#include<bits/stdc++.h>
using namespace std;
main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        long long ans2=INT_MAX,ans=INT_MAX,x=INT_MAX,temp=0;long long mn=-1,mp=INT_MAX;
        bool cond=false;
        for(long long i=0;i<n;i++)
            {
                if(a[i]!=-1)
            {
                if(a[i]>mn)
                    mn=a[i];
                if(x==INT_MAX)
                    {ans=INT_MAX;x=a[i];}
                else
                {
                    long long r=a[i]-1;
                    if(a[i]-x-1==temp)
                    {
                        if(ans2<INT_MAX)
                            ans=ans2;
                        else ans=INT_MAX;
                    }
                    if(a[i]-x-1>temp)
                        {cond=true;
                    break;}
                     if(a[i]-x-1<temp)
                     {
                         long long r=a[i]-1;
                         temp=temp-r;

                          ans2=x+temp;
                         //cout<<"as 2 is "<<ans2<<endl;
                         if(mp>ans2)
                            mp=ans2;
                         if(ans==INT_MAX)
                            ans=ans2;
                         else
                         {ans=__gcd(ans,ans2);
                         if(ans==1)
                            {cond=true;
                         break;}}
                     }

                  x=a[i];

                }temp=0;
            }
            else{
                temp++;
            }

            }
            if(cond)
                cout<<"impossible"<<endl;
            else
            {
                if(ans==INT_MAX)
                    cout<<"inf"<<endl;
                else
                {
                if(mn>mp)
                cout<<"impossible"<<endl;
                else
                    cout<<ans<<endl;
                }

            }
    }
}
