#include <bits/stdc++.h>
using namespace std;

int main()
{
    // how to minimize it accordingly for it
    int test,a,b,i,j,k,n,m,c,x,y,d,store,minn;
    long long int sum,temp,countt,diff,sum1,sum2,kuch;
	cin>>test;
	while(test--)
    {
        cin>>n>>k>>x>>d;
        int arr[k];
        //map<int,int, greater<int> > mp;
       // minn=1000000001;
        //sum=0;
        vector<int> store;
        for(i=0;i<k;i++)
        {
            cin>>arr[i];
            //minn=min(minn,arr[i]);
           // mp[arr[i]]++;
           // sum+=arr[i];
           store.push_back(arr[i]);
        }

        sort(arr,arr+k);
        sum1=accumulate(arr,arr+k,0);
        countt=0;
        sum=0;
        temp=0;
        for(i=0;i<k;i++)
        {
           if(i!=0&&i!=k-1)
           {
               if(arr[i+1]-arr[i]>d&&arr[i]-arr[i-1]>d&&abs(arr[i]-temp)>d)
               {
                   //cout<<"enter"<<endl;
                   // so i need to insert an element
                   if(arr[i]==x)
                   {
                      // cout<<"ss"<<endl;
                       temp=arr[i]-1;
                       countt++;
                        sum+=temp;
                        store.push_back(temp);
                   }
                   else
                   {
                      // cout<<"tt"<<endl;
                   temp=min(x,arr[i]+d);
                   countt++;
                   sum+=temp;
                   store.push_back(temp);
                   }
                   // no need to take something accordingly for it

               }
               // else no need to insert
           }
           else if(i==0)
           {
               if(arr[i+1]-arr[i]>d)
               {
                   // so we need to insert one element
                   temp=min(arr[i]+d,x);
                   countt++;
                   sum+=temp;
                   store.push_back(temp);
               }
           }
           else
           {
               if(arr[i]-arr[i-1]>d&& abs(arr[i]-temp)>d)
               {
                  // cout<<"enter"<<endl;
                   if(arr[i]==x)
                   {
                      // cout<<"ss"<<endl;
                       temp=arr[i]-1;
                       countt++;
                       sum+=temp;
                   }
                   else
                   {
                      // cout<<"tt"<<endl;
                   temp=min(x,arr[i]+d);
                   countt++;
                   sum+=temp;
                   }
                   // no need to take something accordingly for it

               }
           }
           //cout<<"countt is "<<countt<<endl;
           //cout<<"temp is "<<temp<<endl;
        }



            sort(store.begin(),store.end(),greater<int>());
           // for(i=0;i<store.size();i++)
           // {
           //     cout<<store[i]<<"   ";
           // }

        if(countt+k>n||x<n)
        {
            // nothing will be possible
            cout<<-1<<endl;
        }
        else
        {

            int remaining=n-countt-k;
            sum2=0;
            kuch=x;
            j=0;
           // cout<<"kuch is "<<kuch<<endl;
            while(remaining--)
            {
                if(store[j]<kuch)
                {
                    sum2+=kuch;
                }
                else
                {
                    kuch=kuch-1;
                    j++;
                    remaining++;
                }
               // cout<<"sum2 is "<<sum2<<endl;
            }
           // cout<<"sum2 is "<<sum2<<endl;
            // their is the possibility
            sum=sum+sum2+sum1;
            cout<<sum<<endl;
        }
    }
}








        /*
         minn=arr[k-1];

       // cout<<"sum is "<<sum<<endl;


        temp=x+minn;

        map<int,int, greater<int> > :: iterator it;

        countt=n-k;

        for(it=mp.begin();it!=mp.end()&&countt>0;it++)
        {
           diff = temp - ((*it).first);
          // cout<<" some"<<(*it).first<<endl;
          // cout<<"diff is "<<diff<<endl;
           diff=min(diff,countt);
           sum=sum+(diff*temp-((diff-1)*(diff))/2);
           countt=countt-diff;
           temp=((*it).first)-1;
          // cout<<"countt is "<<countt<<"sum is "<<sum<<endl;

        }
       cout<<sum<<endl;
    }
}
*/
