#include<bits/stdc++.h>
using namespace std;


int main()
{

    int test,a,b,c,d,i,j,k,l,n,m,countt,sum,store;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        int brr[n];
        pair<int ,int > pp[2*n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            pp[i].first=arr[i];
            pp[i].second=1;
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            pp[i+n].first=brr[i];
            pp[i+n].second=2;
        }
        sort(pp,pp+n*2);
        // lets print it first of all
        for(i=0;i<2*n;i++)
        {
            cout<<pp[i].first<<"       "<<pp[i].second<<endl;

        }
          if(pp[n-1].first!=pp[n].first)
          {
              cout<<-1<<endl;
          }
          else
          {
              store=pp[n-1].first;
              int countt1=0;
              int countt2=0;
              int countt11=0;
              int countt22=0;
              for(i=0;i<2*n;i++)
              {
                  if(pp[i].first<store&&pp[i].second==1)
                  {
                      countt1++;
                  }
                  else if(pp[i].first<store&&pp[i].second==2)
                  {
                      countt2++;
                  }
                  else if(pp[i].first==store&&pp[i].second==1)
                  {
                      countt11++;
                  }
                  else if(pp[i].first==store&&pp[i].second==2)
                  {
                      countt22++;
                  }
              }
              // its not an easy one so you need to think about it
              int mid=n/2 +1;
              // condition when we don't need to swap
              if(countt1<mid&&countt11+countt1>=mid&&countt2<mid&&countt22+countt2>=mid)
              {
                  cout<<0<<endl;
              }
              else if(countt11+countt1<mid)
              {
                  cout<<mid-countt11-countt1<<endl;
              }
              else if(countt22+countt2<mid)
              {
                  cout<<mid-countt22-countt2<<endl;
              }
              else if(countt1>=mid)
              {
                  cout<<countt1-mid+1<<endl;
              }
              else if(countt2>=mid)
              {
                  cout<<countt2-mid+1<<endl;
              }


          }



    }
}

