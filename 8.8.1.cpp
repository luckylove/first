n
        // after taking the input form it
        int dp[n][n];
        for(i=0;i<n;i++)
        {
            dp[0][i]=arr[0][i];
        }
        for(j=1;j<n;j++)
        {
           for(i=0;i<n;i++)
           {
               if(i==0)
               {
                   dp[j][i]+=max(dp[j-1][i],dp[j-1][i+1]);
               }
               else if(i==n-1)
               {
                   dp[j][i]+=max(dp[j-1][i],dp[j-1][i-1]);
               }
               else
               {
                    dp[j][i]+=max(dp[j-1][i],max(dp[j-1][i-1],dp[j-1][i+1]));
               }

           }

        }
        int maxx=0;
        for(i=0;i<n;i++)
        {
            maxx=max(maxx,dp[n-1][i]);
        }
        cout<<maxx<<endl;
    }
}
