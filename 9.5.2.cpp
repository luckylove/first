#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    int minn;
};
// its a really the basic level question you need to solve it
int main()
{
        int test,a,b,c,d,i,j,k,l,m,n,v;
        cin>>test;
        while(test--)
        {
            cin>>n>>m;
            int arr[n][m];
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cin>>arr[i][j];
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<arr[i][j]<<"  ";
                }
                cout<<endl;
            }
            cout<<endl;
            struct node dp[n][m];
            dp[0][0].value=arr[0][0];
            dp[0][0].minn=arr[0][0];
            for(i=1;i<n;i++)
            {
                // first element of every row is
                dp[i][0].value=dp[i-1][0].value+arr[i][0];
                dp[i][0].minn=min(dp[i-1][0].minn,dp[i][0].value);

            }
            for(i=1;i<m;i++)
            {
                // first element of every row is
                dp[0][i].value=dp[0][i-1].value+arr[0][i];
                dp[0][i].minn=min(dp[0][i-1].minn,dp[0][i].value);

            }
            for(i=1;i<n;i++)
            {
                for(j=1;j<m;j++)
                {
                    // now we need to take the min of two enteires accordingly for it
                    if(min(dp[i-1][j].minn,dp[i-1][j].value+arr[i][j])>min(dp[i][j-1].minn,dp[i][j-1].value+arr[i][j]))
                    {
                        // i need to take that value whose min is greater
                        dp[i][j].value=dp[i-1][j].value+arr[i][j];
                        dp[i][j].minn=min(dp[i-1][j].minn,dp[i-1][j].value+arr[i][j]);

                    }
                    else
                    {
                        dp[i][j].value=dp[i][j-1].value+arr[i][j];
                        dp[i][j].minn=min(dp[i][j-1].minn,dp[i][j-1].value+arr[i][j]);
                    }
                }
            }

            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<dp[i][j].value<<"  ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<dp[i][j].minn<<"  ";
                }
                cout<<endl;
            }
            cout<<endl;







            cout<<-dp[n-1][m-1].minn+1<<endl;
        }

}
