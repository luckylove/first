#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    ll test,a,b,c,n,i,j,k,m;
    m=1000000007;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ll arr[n];
        map<ll ,ll,greater<ll> > mapp;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mapp[arr[i]]++;
        }
        ll s=mapp.size();
        ll brr[s];
        ll first[s];
        ll second[s];
        i=0;
        for(auto itr=mapp.begin();itr!=mapp.end();itr++)
        {
            brr[i]=itr->second;
            //cout<<brr[i]<<"  ";
            i++;
        }
       // cout<<endl;
        // now brr[i] stores the countt;
        ll ans=1;
       // cout<<"s is "<<s<<endl;
        for(i=0;i<s;i++)
        {
            //cout<<i<<endl;
            if(brr[i]%2==0)
            {
                if(brr[i]!=0)
                ans=(ans*brr[i]*(brr[i]-1)/2)%m;
               // cout<<"lskdjfljksdf"<<ans<<endl;
            }
            else
            {
                //cout<<"here i s"<<ans<<endl;
                //cout<<"brr[i] is "<<brr[i]<<endl;
                //cout<<"brr[i+1] is "<<brr[i+1]<<endl;
               // cout<<"brr[i]-1"<<brr[i]-1<<endl;
                //cout<<"brr[i]-2"<<brr[i] -2<<endl;
                if(brr[i]==1)
                {
                    ans=(ans*(brr[i]*brr[i+1]))%m;
                }
                else
                {
                   ans=(ans*((brr[i]*brr[i+1])%m*((brr[i]-1)*(brr[i]-2)/2))%m)%m;
                }

                brr[i+1]--;
                //cout<<"now"<<ans<<endl;
            }
           // cout<<" is is "<<i<<endl;
            //cout<<"ans i s"<<ans<<endl;
           // cout<<endl<<endl;
        }
        cout<<ans<<endl;


    }

}



