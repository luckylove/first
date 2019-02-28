#include<bits/stdc++.h>
using namespace std;
int main()
{
 int test,i,j,k,l,c,countt,temp,store,sum,p,s,a,b;
 long long int n,m;
   cin>>test;
   while(test--)
   {
      cin>>n>>m;
      int arr[n];
      int brr[n];
      set< int> st;
      // we need again print the segment accordingly for it
      multimap <int ,int > mapp;
      int flag=0;
      for(i=0;i<n;i++)
      {
          cin>>arr[i];
          cin>>brr[i];
          mapp[arr[i]]=brr[i];
          // here i just insert the elements
          st.insert(brr[i]-arr[i]);
          len=brr[i]-arr[i];
          cout<<" len is "<<len<<endl;
          if(brr[i]-arr[i]==l)
          {
              flag=1;
          }

      }
      cout<<" flag is "<<flag<<endl;
      if(flag!=1)
      {
          cout<<"ss"<<endl;
          for(i=0;i<n;i++)
          {
              cout<<" something smething"<< brr[i]<<endl;
              len=brr[i]-arr[i];
              temp=brr[i];
              while(mapp.find(temp)!=mapp.end())
              {
                  store=(mapp.find(temp))->second;
                  len=store-arr[i];
                  cout<<" here len is "<<len<<endl;
                  temp=store;
                  st.insert(len);
                  if(len==l)
                  {
                      flag=1;
                  }
              }

          }
      // we can call something
      }
      if(flag==1)
      {
          cout<<"Yes"<<endl;
      }
      else
      {

          cout<<"No"<<endl;
      }

   }
}
