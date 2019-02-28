// september challenge
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,a,b,c,i,j,k,m,n,s,x,y;
   cin>>test;
   /*
   int store[1001]={0};
   // we need to use the pairs accordingly for it
   // so first of all make something like what we can it the //
   // array of the prime factors accoridngly for it
   for(i=2;i<=1000;i++)
   {
       if(store[i]==0)
       {
           for(j=i*2;j<=1000;j+=i)
           {
               store[j]=1;
           }
       }
   }
   // now lets print it first accoridgly for it

   for(i=2;i<=100;i++)
   {
       if(store[i]==0)
       {
          // cout<<i<<" ";
       }
   }

   set <int> st;
   for(i=3;i<=100;i++)
   {
       if(store[i]==0)
       {
           for(j=i;j<=100;j++)
           {
               if(store[i]==0&&store[j]==0)
               {
                  // cout<<i<<"  "<<j<<"     "<<(i+j)<<endl;
                  st.insert(i+j);
               }
           }
       }
   }

   cout<<endl<<endl;
   for(auto itr=st.begin();itr!=st.end();itr++)
   {
       cout<<*itr<<"  ";
   }
   cout<<endl;
     */
   while(test--)
   {
       cin>>n;
        int arr[n];
        long long int even=0;
        long long int odd=0;
        long long int ans=0;
        int temp;
       map<int,int> mp;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
           if(arr[i]%2==0)
           {
               even++;
           }
           else
           {
               odd++;
           }

       }
       //ans=(n*(n-1))/2;
       //ans=n*n;
       //ans=ans-(even*odd);
       ans=(odd*(odd-1)+even*(even-1))/2;
       int countt=0;
       // cout<<"ans is "<<ans<<endl;
       for(i=0;i<n;i++)
       {
             temp=(0^arr[i]);
              if(mp.find(temp)!=mp.end())
              {
                  countt+=mp[temp];
              }
          mp[arr[i]]++;
       }
      // cout<<"countt is "<<countt<<endl;
        map<int,int> m;
       for(i=0;i<n;i++)
       {
               temp=(2^arr[i]);
              if(m.find(temp)!=m.end())
              {
                  countt+=m[temp];
              }
                m[arr[i]]++;
       }
      // cout<<"cont  here si s si s"<<countt<<endl;
       cout<<(ans-countt)<<endl;



   }
}
