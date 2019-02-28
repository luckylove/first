#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int test,a,b,c,n,i,j,k,m;
    int some[201];
    for(i=0;i<201;i++)
    {
        some[i]=1;
    }
    some[0]=0;
    some[1]=0;
    for(i=2;i<201;i++)
    {
        for(j=i*2;j<201;j+=i)
        {
            some[j]=0;
        }
    }
    vector<int> store;
    for(i=0;i<201;i++)
    {
       if(some[i])
        store.push_back(i);
    }
    m=store.size();
    set<int> st;
    vector<int> next;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            next.push_back(store[i]*store[j]);
        }
    }
    set <int> tonext;
    m=next.size();
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            tonext.insert(next[i]+next[j]);
        }
    }

    cin>>test;
    while(test--)
    {
        cin>>n;
        if(tonext.find(n)!=tonext.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

