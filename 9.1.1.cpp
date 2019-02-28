#include<bits/stdc++.h>
using namespace std;
double findroot(int a,int b)
{
    double ans=sqrt(a*a+b*b);

}
int main()
{
    int n,i,j,k,a;
    double ans=0;
    cin>>n;
    int arr[n];
    double ans1=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ans1+=arr[i]*4;
    }
    int brr[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>brr[i];
    }
    /*
    for(i=0;i<n-2;i++)
    {
        ans+=findroot(arr[i]+brr[i],arr[i+1]);
    }
    */
    if(n==1)
    {
        cout<<ans1<<endl;
    }
    else
    {
        for(i=0;i<n-2;i++)
        {
            ans+=arr[i]+brr[i]+arr[i+1];
        }
        ans+=arr[n-2]+brr[n-2];
        cout<<ans1+ans<<endl;
    }



}
