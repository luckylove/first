#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll test,a,b,c,d,i,j,k,l,n,m;
   cin>>test;
   string arr;

   while(test--)
   {
       cin>>n;
       cin>>arr;
       // we will get the ans only when one space comes into picture accordingly

       ll ans=0;

       i=0;
       while(arr[i]=='#'&&i<n)
       {
           i++;
       }
       ll flag=1;
       ll countt=0;
       ll countspace=0;
      while(i<n)
      {
          // ignore the spaces then
          while(arr[i]=='.'&&i<n)
          {
              i++;
          }

            countt=0;
            while(arr[i]=='#'&&i<n)
            {
                countt++;
                i++;
            }
            // now we have some countt
            // lets start decreasing the countt
            countspace=0;
             while(arr[i]=='.'&&i<n)
            {
                countspace++;
                i++;
            }
            // now if the countspace is less then the something
            if(countspace<countt)
            {
                // no need to do further
                flag=0;
                break;

            }
            else
            {
                ans+=(((countt)*(countt-1))/2);
            }


      }
      if(flag==0)
      {
          cout<<-1<<endl;
      }
      else
      {
          // we need to now print the minimum no of element accordingly for it
          // again i need to sort it and compare it
          // accordingly for it
          int brr[n]={0};
          int crr[n]={0};
          for(i=0;i<n;i++)
          {
              if(arr[i]=='#')
              {
                  brr[i]=-1;
                  crr[i]=-1;
              }
          }
          sort(brr,brr+n);
          // crr[i] is oritigina

          i=0;
          j=0;

          while(brr[i]==-1)
          {
              while(crr[j]!=-1)
              {
                  j++;
              }
              //cout<<"ss"<<   "   "<<i<<"  "<<j<<endl;
              ans+=j-i;
              i++;
              j++;
          }
          cout<<ans<<endl;

      }



   }


}
