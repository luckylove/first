// longest common subsequence problem
#include<bits/stdc++.h>
using namespace std;

int longestcommon(string arr,string brr,int n,int m)
{
    int dp[n+1][m+1];

    int i,j;

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
            else if(arr[i-1]==brr[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=1+max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    return dp[n][m];

}
int main()
{
    int test,a,b,c,d,i,j,k,l,m,n;
    cin>>test;
    string arr;
    string brr;
    while(test--)
    {
        cin>>arr;
        cin>>brr;
        n=arr.size();
        m=brr.size();
        cout<<m+n-longestcommon(arr,brr,n,m)<<endl;
    }
}
