#include<bits/stdc++.h>
using namespace std;
int main()
{
   // level order traversal of the queue accordingly for it
   queue <struct node*> qu;
   qu.push();
   qu.front();
   qu.push();

    int i,j,k,l,m,a,b,c,d,n,test;
    int sum1,sum2,temp;
     cin>>test;
    while(test--)
   {

       cin>>n;
       int arr[n];
       for(i=0;i<n;i++)
       {
           cin>>arr[i];

       }
      stack <pair <int ,int>> st;
      int store[n];
      store[0]=1;
      j=1;
      st.push(make_pair(arr[0],1));
       for(i=1;i<n;i++)
       {
           if(st.top().first > arr[i])
           {
            st.push(make_pair(arr[i],1));
            store[j]=1;
            j++;
           }
           else if(st.top().first == arr[i])
           {
               temp=st.top().second;
               st.pop();
               temp++;
               st.push(make_pair(arr[i],temp));
               store[j]=temp;
               j++;
           }
           else
           {
               sum1=st.top().first;
               sum2=st.top().second;
               temp=0;
               while(sum1<=arr[i])
               {
                   temp=temp+sum2;
                   st.pop();
                   sum1=st.top().first;
                   sum2=st.top().second;

               }
               st.push(make_pair(arr[i],temp));
               store[j]=temp;
               j++;
           }


       }
       for(i=0;i<n;i++)
       {
           cout<<store[i]<<" ";
       }
       cout<<endl;
   }
}
