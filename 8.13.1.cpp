#include<bits/stdc++.h>
using namespace std;
int main()
{
       long long int test,i,j,k,n,m,a,b,c,countt,temp,sum,p,s,x,store;
       cin>>n>>x;
       int arr[n];
       unordered_multimap<int, int> mapp;
       unordered_multimap<int ,int > :: iterator it;
          for(i=0;i<n;i++)
          {
              cin>>arr[i];
              mapp.insert(make_pair(arr[i],i));
              //mapp[arr[i]]=i;
          }
     // for(it=mapp.begin();it!=mapp.end();it++)
     //// {
     //     cout<<it->first<<"   "<<it->second<<endl;
     // }
     // cout<<endl<<endl;

    countt=0;

    for (i=0;i<n-1;i++)
        {
        for (j=i+1;j<n;j++)
         {

            if ((arr[i]*arr[j]<=x)&&(arr[i]*arr[j]!=0)&&(x%(arr[i]*arr[j])==0))
             {
                 // then we can find out that particular number
                 // in the hash table accordingly for it
                  temp = (x/(arr[i]*arr[j]));
                  it = mapp.find(temp);
                 auto itr = mapp.equal_range(temp);
                 store=0;
                  for (auto it = itr.first; it != itr.second; it++)
                 {
                    // if((it->second > i)&&(it->second > j))
                      store++;
                 }
                // cout<<"store is "<<store<<endl;
                if(it!=mapp.end())
                {
                   if ((temp != arr[i]) &&(temp != arr[j])&&store>=1)
                   {
                      // cout<<" arr[i] is "<<arr[i]<<" arr[j] is "<<arr[j]<<"temp si "<<temp<<endl;
                        countt=countt+store;
                   }

                }


            }
        }
    }

   cout<<countt/2<<endl;

}
