#include <bits/stdc++.h>
// their will be noproblems
// no need to construct directly print the something
// something without considering any other things accordingly for it
using namespace std;
int main()
{
    // how to minimize it accordingly for it
    int test,a,b,i,j,k,n,m,c,x,y,d,store,minn;
    long long int sum,temp,countt,diff;
	cin>>test;
	while(test--)
    {
        cin>>n>>k>>x>>d;
        int arr[k];
        map<int,int, greater<int> > mp;
        minn=1000000001;
        sum=0;
        for(i=0;i<k;i++)
        {
            cin>>arr[i];
            minn=min(minn,arr[i]);
            mp[arr[i]]++;
            sum+=arr[i];
        }

        sort(arr,arr+k,greater<int>());
         minn=arr[k-1];

       // cout<<"sum is "<<sum<<endl;


        temp=x+minn;

        map<int,int, greater<int> > :: iterator it;

        countt=n-k;

        for(it=mp.begin();it!=mp.end()&&countt>0;it++)
        {
           diff = temp - ((*it).first);
          // cout<<" some"<<(*it).first<<endl;
          // cout<<"diff is "<<diff<<endl;
           diff=min(diff,countt);
           sum=sum+(diff*temp-((diff-1)*(diff))/2);
           countt=countt-diff;
           temp=((*it).first)-1;
          // cout<<"countt is "<<countt<<"sum is "<<sum<<endl;

        }
       cout<<sum<<endl;
    }
}
