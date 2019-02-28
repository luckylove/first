#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,k,l,m,a,b,c,d,n,test,q;
    long long int sum1,sum2;
     priority_queue <string > pq;
     pq.push("abc");
     pq.push("abd");
     pq.push("poi");
     pq.push("asdfhdfgh");
     pq.push("klasdasdfasdf");
     pq.push("gupttts");
     pq.push("shubhaasdfam");
     pq.push("gupts");
      for(i=0;i<8;i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    queue <int> qu;
    stack <int> st;
    for(i=0;i<20;i++)
    {
        qu.push(i*1000);
        st.push(i*1000);
    }
    for(i=0;i<20;i++)
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;

    for(i=0;i<20;i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

       cin>>n;
       int arr[n];
       cin>>arr[0];
       for(i=1;i<n;i++)
       {
               cin>>arr[i];
               arr[i]+=arr[i-1];
       }
       for(i=0;i<n;i++)
       {
         cout<<arr[i]<<" ";
      }
       cout<<endl;
       cin>>q;
       while(q--)
       {
           cin>>a;


           cout<<(lower_bound(arr,arr+n,a)-arr)<<endl;
       }

}
/*
 if(arr[(upper_bound(arr,arr+n,a)-arr)-1]==a)
           {
               cout<<(upper_bound(arr,arr+n,a)-arr)-1<<endl;
           }
           else
*/
