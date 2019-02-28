#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,a,b,c,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        char arr[n];
        cin>>arr;
        int temp[n+1][26];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<26;j++)
            {
                temp[i][j]={0};
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i==0)
            {
                temp[i][arr[i-1]-'a']++;
            }
            else
            {
                for(j=0;j<26;j++)
                {
                    temp[i][j]=temp[i-1][j];
                }
                temp[i][arr[i-1]-'a']++;
            }
        }
        int maxx=0;
        /*
        for(i=0;i<=n;i++)
        {
            for(j=0;j<26;j++)
            {
                cout<<temp[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        */
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
               // cout<<" is si "<<i<<" j is "<<j<<endl;
                for(k=0;k<26;k++)
                {
                   // cout<<temp[j][k]-temp[i-1][k]<<"  ";
                    if((j-i+1)/2<=temp[j][k]-temp[i-1][k])
                    {
                       maxx=max(maxx,j-i+1);
                    }
                }
               // cout<<endl;

            }
        }
        cout<<maxx<<endl;


    }
}
