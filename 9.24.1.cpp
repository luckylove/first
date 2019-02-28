#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<ceil((double)3/2);
    long long int test,a,c,d,b,i,j,k,m,n;
    long long int s,x;
    cin>>s>>x>>n;
    long long int t[n];
    long long int y[n];

    map<int,int> mapp;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>y[i];
        mapp[t[i]]=y[i];
    }
    long long int start,endd;
    start=1;
    map<int,int> :: iterator itr;

    long long int diff;
    long long int ans=0;
    for(itr=mapp.begin();itr!=mapp.end();itr++)
    {
        endd=itr->first;
        // then we need to calculate the differnce accordingly
       // cout<<"endd is "<<endd<<endl;
        diff=endd-start;
        // these differnce number of days we need to add x
       // cout<<"diff is "<<diff<<endl;
        if(diff*x>=s)
        {
            // it means we are over with it we need to break with it
            ans+=ceil((double)s/x);
            break;
        }
        // else we need to do something regarding all these things
        s=s-diff*x;
        ans+=diff;
        s=s-itr->second;
        ans++;

        if(s<=0)
        {
            break;
        }
        start=endd+1;
        //cout<<"s" <<s<<endl;
       // cout<<" sn is"<<ans<<endl;

    }
    // now we come sot the end
    if(s>0)
    {
        ans+=ceil((double)s/x);
    }
    cout<<ans<<endl;

}
