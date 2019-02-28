#include<bits/stdc++.h>
using namespace std;
int main()
{
    // binary search tree accordingly for it
    long long int test,a,b,c,d,e,i,j,k,l,n,m,countt,q,index,some;
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
    vector<int> crr[m];
    vector<long long int> store[m];
    for(i=0;i<m;i++)
    {
       cin>>a;
       sum=0;
       for(j=0;j<a;j++)
       {
           cin>>b;
          // if(sum<=power)
          // {
           crr[i].push_back(b);
           sum+=brr[b];
           store[i].push_back(sum);
          // }
       }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<crr[i].size();j++)
        {
            cout<<crr[i][j]<<"    ";
        }
        cout<<endl;
        for(j=0;j<store[i].size();j++)
        {
            cout<<store[i][j]<<"    ";
        }
        cout<<endl;
    }

    for(i=0;i<m;i++)
    {


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
            index=index-n-1;

            some=upper_bound(store[index].begin(),store[index].end(),value-1)-store[index].begin();
            // means we found the upper bound accordingly for it
            cout<<"some is "<<some<<endl;
            cout<<"store[index][some]"<<store[index][some]<<endl;
            if(some==0)
            {
                a=crr[index][some];
                if(value<=brr[a])
                cout<<arr[a][value-1];
                //cout<<"a";
            }
            else
            {
                cout<<"here"<<endl;
                cout<<"store[index][some-1]"<<store[index][some-1]<<endl;

                value=value-store[index][some-1];
                cout<<"value is "<<value<<endl;
                a=crr[index][some];
                if(value<=brr[a])
                cout<<arr[a][value-1];
                //cout<<"b";
            }
        }
    }
    cout<<endl;

}

