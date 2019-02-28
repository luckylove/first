

#include<bits/stdc++.h>
using namespace std;
# define ll long long

int main()
{
    ll test,a,b,c,n,i,j,k,m;
    m=1000000007;
    cin>>test;
        ll table[1000001]={0};
        table[2]=1;
        table[0]=1;
      //  cout<<table[0]<<"  "<<table[2]<<"  ";
        for(i=4;i<1000001;i+=2)
        {
            table[i]=(table[i-2]*(i-1))%m;
           // cout<<table[i]<<"  ";


        }
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
        i=0;
        for(auto itr=mapp.begin();itr!=mapp.end();itr++)
        {
            brr[i]=itr->second;
           // cout<<brr[i]<<"  ";
            i++;
        }
       // cout<<endl;
       // cout<<"s is "<<s<<endl;
       // cout<<endl;

      //  cout<<endl;
       ll ans=1;
        for(i=0;i<s-1;i++)
        {
            if(brr[i]%2==1)
            {
                ans=(ans*(brr[i]*brr[i+1])%m)%m;
                  brr[i]=brr[i]-1;
                 brr[i+1]=brr[i+1]-1;
            }
        }
       // cout<<"ans till now"<<ans<<endl;
        for(i=0;i<s;i++)
        {
           // cout<<brr[i]<<"   ";
        }
       // cout<<endl<<endl;
        for(i=0;i<s;i++)
        {
           // cout<<"ss"<<endl;
            //cout<<" is is "<<i<<endl;
            ans=(ans*table[brr[i]])%m;
          //  cout<<"ans is "<<ans<<endl;
        }
        cout<<ans<<endl;


    }

}




