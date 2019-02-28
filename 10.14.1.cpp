#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define ld long double
int main()
{
    ll test,a,b,c,n,i,j,k,m;
    cin>>n>>m;
    string arr[n];
    string brr[n];
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            brr[i]="01010101";
        }
        else
            brr[i]="10101010";
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // now if we subtract
    cout<<endl;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==brr[i][j])
                cout<<0;
            else
                cout<<1;
        }
        cout<<endl;
    }
    // try to make the dp
    int dp[n][m];
    for(i=0;i<n;i++)
    {
        dp[i][0]=1;
    }
    for(i=0;i<m;i++)
    {
        dp[0][i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(arr[i][j]!=arr[i-1][j]&&arr[i][j]!=arr[i][j-1]&&arr[i][j]==arr[i-1][j-1])
            {
                dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
            }
            else
                dp[i][j]=1;
        }

    }
    cout<<endl;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<dp[i][j]<<"";
        }
        cout<<endl;
    }
    ll q;
    cin>>q;
    while(q--)
    {

    }

}





