#include<bits/stdc++.h>
using namespace std;
int parent(int* arr,int i)
    {
        while(arr[i]!= i)           //chase parent of current element until it reaches root
        {
         i=arr[i];
        }
        return i;
    }
int main()
{
     int test,q,temp,a,b,c,d,x,y,i,j,k,n,m,countt,countt1,sum,summ,store,diff;
      // i think we need to take the vector accordingly for it
      // because may be they comes first before they are connected to someone
      cin>>n;
      cin>>q;
      int arr[n];
          //int brr[n];
          for(i=0;i<n;i++)
          {
              arr[i]=i;

          }
      while(q--)
      {
          cin>>a>>x>>y;
          x--;
          y--;
          if(a==0)
          {

              if(y<x)
              {
                  temp=y;
                  y=x;
                  x=temp;
              }

              c=parent(arr,x);
             // cout<<"c is "<<c<<endl;

              d=parent(arr,y);
              //cout<<" d is "<<d<<endl;
              arr[d]=c;


          }
          else
          {
              // now we need to ans
              if(parent(arr,x)==parent(arr,y))
              {
                  cout<<"YES"<<endl;
              }
              else
              {
                  cout<<"NO"<<endl;
              }
          }

      }
}
