#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int test,a,k,d,b,c,i,j,m,n;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        long long int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
           // arr[i]=abs(arr[i]);
        }
        cout<<1<<endl;
       m=abs(arr[0]);
       int index=0;
       for(i=0;i<n;i++)
       {
           if(m<abs(arr[i]))
           {
               m=abs(arr[i]);
               index=i;
           }
       }
       cout<<arr[index]<<endl;
    }
}
