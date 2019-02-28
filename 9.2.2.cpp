#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long  test,i,j,k,s,a,b,c,d,n,m;
        cin>>n>>s;
        int arr[n];
        for(i=0;i<n;i++)
        {

            cin>>arr[i];
        }
        sort(arr,arr+n);
        // now then median is given to me and we need to do something
        // so that we can make it to be equalt o something

        int original=n/2;
        int median=arr[original];
        long long  sum=0;
        if(median==s)
        {
            cout<<0<<endl;
        }
        else if(median>s)
        {

            for(i=original;;i--)
            {
                if(arr[i]>s)
                {
                    sum+=arr[i]-s;
                }
                else
                    break;
            }
        }
        else
        {

            for(i=original;;i++)
            {
                if(arr[i]<s)
                {
                    sum+=s-arr[i];
                }
                else
                    break;
            }
        }
        cout<<sum<<endl;
}





