#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,countt,q,index,some;
    long long int sum,value;
    cin>>n>>m;
    string arr[n+1];
    int brr[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i].size();
    }
    vector<int> crr[m];
    vector<long long int > store[m];
    for(i=0;i<m;i++)
    {
       cin>>a;
       sum=0;
       for(j=0;j<a;j++)
       {
           cin>>b;
           crr[i].push_back(b);
           sum+=brr[b];
           store[i].push_back(sum);
       }
    }
    cout<<"all done"<<endl;
    cin>>q;
    while(q--)
    {
        cin>>index;
        cin>>value;
        cout<<"now"<<endl;
        if(index<=n)
        {
            cout<<"arr"<<arr[index]<<endl;
            cout<<arr[index][(int)value-1];
        }
        else
        {
            index=index-n-1;
            some=upper_bound(store[index].begin(),store[index].end(),value-1)-store[index].begin();
            // means we found the upper bound accordingly for it
             cout<<"some"<<some<<endl;
             cout<<"index is "<<index<<endl;
            if(some==0)
            {
                cout<<"here"<<endl;
                cout<<arr[crr[index][some]][value-1];
            }
            else
            {
                cout<<"there "<<endl;
                value=value-store[index][some-1];
                cout<<arr[crr[index][some]][value-1];
            }
        }
    }
    cout<<endl;

}
