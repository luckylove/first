#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool s= next_permutation(arr,arr+n);
    lexicographical_compare(
                            n)
    next
    max_element(
                )
    min_element
   int i,j,k,l,m,a,b,c,d,n,test;
   long long int sum1,sum2;
   cin>>test;
   while(test--)
   {

       cin>>n;
       int arr[n];
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       sum1=0;
       sum2=0;
       for(i=0;i<n;i+=2)
       {
           sum1+=arr[i+1]-arr[i];
       }
       for(i=0,j=n-1;i<n/2;i++,j--)
       {
           sum2+=arr[j]-arr[i];
       }
       cout<<sum1<<" "<<sum2<<endl;

   }
}
/*
   sum=accumulate(arr,arr+n,0);
   vector <int> v;
   vector <int> :: iterator it;
    for(i=0;i<10;i++)
    {
        v.push_back(i*10);

    }
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"  ";
    }
    cout<<endl<<endl;
    for(i=0;i<10;i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
*/
