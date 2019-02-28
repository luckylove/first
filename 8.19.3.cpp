#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,i,j,k,n,m,c,countt1,temp,store,sum,countt2,ans;
	cin>>test;
	while(test--)
    {
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       // starting with the vinja
      // cout<<"something"<<endl;
       countt1=0;
       countt2=0;
       for(i=0;i<n;)
       {
           if(arr[i]==1)
           {
               // vinja want to maximize
               // her uses the + sign
               if(countt1>countt2)
               {
                   countt1++;
               }
               else
               {
                   countt2++;
               }

           }
           i++;
          if(i>=n)
          {
              break;
          }
           if(arr[i]==1)
           {
               if(countt1>countt2)
               {
                   countt2++;
               }
               else
               {
                   countt1++;
               }
           }
           i++;



       }
       // so we get the two countt
       ans=abs(countt2-countt1);
       if(ans>=k)
       {
           cout<<1<<endl;
       }
       else
       {
           cout<<2<<endl;
       }
    }
}

