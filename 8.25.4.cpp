#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,e,i,x,j,k,l,n,m,q,index,some;
    long long int countt;
    long long int minn=10000000;
        cin>>n>>m>>x;
        int arr[n];
        int brr[m];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>brr[i];
        }
        int* one;
        int* two;
        int times=10000;
        while(times--)
        {
        a=*max_element(arr,arr+n);

        b=*min_element(arr,arr+n);

        c=*max_element(brr,brr+m);

        d=*min_element(brr,brr+m);

        minn=min(minn,(long long int)a+c-b-d);

        one = max_element(arr,arr+n);
        two = max_element(brr,brr+m);
        *one=*one-x;
        *two=*two-x;
        //cout<<minn<<endl;
        }
        //cout<<"finall "<<minn<<endl;
        cout<<minn<<endl;




}
