#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test,a,b,c,d,i,j,k,l,n,m,temp,store,x,y,countt;
    int ans;
    cin>>test;
    while(test--)
    {
      cin>>n;
      // starts with something and then end with something too
      if(n==2)
      {
          cout<<1<<endl;
      }
      else
      {
          countt=0;
          a=1;
          while(a<n)
          {
              a=a*2;
              if(n==a)
              {
                  break;
              }
          }
          if(n==a&&a%2==0)
          {
              cout<<1<<endl;
          }
          else if(n==a&&a%2!=0)
          {
              cout<<0<<endl;
          }
          else
          {
                  temp=1;
                  ans=1000000002;
                  x=0;
                  while(temp<n)
                  {
                      temp=temp*2;
                      x++;
                  }
                  // now it means temp is greater then something
                  ans=min(ans,temp-n+1);
                //  cout<<"ans is "<<ans<<endl;
                  // now
                  temp=temp/2;
                  x--;
                  // now we subtract
                  m=n-temp;
                  //cout<<"m is "<<m<<endl;
                  store=1;
                  y=0;
                  while(store<m)
                  {
                      store=store*2;
                      y++;
                  }
                 // cout<<"stor is "<<store<<endl;
                  ans=min(ans,store-m);
                  store=store/2;
                  //cout<<"nwo ans si "<<ans<<endl;
                  ans=min(ans,m-store);
                  cout<<ans<<endl;
                      }

                  }

    }
}
