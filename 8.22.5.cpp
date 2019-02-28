#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,m,x,i,k,ss;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&k);
        int arr[n];
        map<int ,int > mapp;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            mapp[arr[i]]++;
        }
         m=mapp.size();
        pair<int,int > pp[m];
        int j=0;
        int countt=0;
        if(k%2==0)
        {
            if(mapp.find(k/2)!=mapp.end())
            {
                ss = (mapp.find(k/2))->second;
                countt+=(ss*(ss-1))/2;
            }
        }
        for(auto itr=mapp.begin();itr!=mapp.end();itr++)
        {
           pp[j].first=itr->first;
           pp[j].second=itr->second;
           j++;
        }
        int l=0;
        int r=m-1;

        while(l<r)
        {
           if(pp[l].first+pp[r].first>k)
           {
               r--;
           }
           else if(pp[l].first+pp[r].first<k)
           {
               l++;
           }
           else
           {

               countt+=(pp[l].second)*(pp[r].second);
               r--;
               l++;

           }
        }
       printf("%d\n",countt);
    }
}
