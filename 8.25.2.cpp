#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,countt,q,index,some;
    long long int sum,value,power;
    power=pow(2,50);
    cin>>n>>m;
    string arr[n+1];
    long long int brr[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i].size();
    }
    vector<int> crr[m+1];
    vector<long long int> store[m+1];
    for(i=1;i<=m;i++)
    {
       cin>>a;
       sum=0;
       for(j=0;j<a;j++)
       {
           cin>>b;
           if(sum<=power)
           {
           crr[i].push_back(b);
           sum+=brr[b];
           store[i].push_back(sum);
           }
       }
    }
    cin>>q;
    while(q--)
    {
        cin>>index;
        cin>>value;
        if(index<=n)
        {
            cout<<arr[index][value-1];
        }
        else
        {
            index=index-n;

            some=upper_bound(store[index].begin(),store[index].end(),value)-store[index].begin();
            // means we found the upper bound accordingly for it
            if(some==0)
            {
                a=crr[index][0];
                if(value-1<brr[a])
                cout<<arr[a][value-1];
                //cout<<"a";
            }
            else
            {
                value=value-store[index][some-1];
                cout<<arr[crr[index][some]][value-1];
                //cout<<"b";
            }
        }
    }
    cout<<endl;

}


