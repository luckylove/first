#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,m,x,i,k,a;
    //cin>>test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&k);
        //cin>>n>>k;
        int arr[n];
        map<int ,int > mapp;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            mapp[arr[i]]++;
        }
        sort(arr,arr+n);

        long long int countt=0;
        for(i=0;i<n;i++)
        {

            if(k-arr[i]==arr[i])
            {
                //countt--;
                a=mapp[arr[i]];
               // cout<<"s is "<<a<<endl;
                countt+=(a*(a-1))/2;
                //cout<<countt<<endl;
                break;
            }
            else if(arr[i]*2>k)
            {
                break;
            }
            else
            {
               // cout<<countt<<" dd "<<endl;
                countt+=mapp[k-arr[i]];
               // cout<<countt<<" 77"  <<endl;
            }

        }
        printf("%lld\n",countt);
    }
}
