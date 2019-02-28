#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //scanf("%d",&t);
    //getch();
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n+1;i++)
        ar[i]=1;

    int p[13];

    for(int i=2;i<=13;i++)
    {
        if(n%i==0)
        {
            for(int j=i;j<n+1;j=j+i)
            {
                ar[j]=0;
            }
        }
    }int ans=0;
    for(int i=1;i<n+1;i++)
        ans+=ar[i];
        cout<<ans<<endl;
   // printf("%d\n",ans);
}
