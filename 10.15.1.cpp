#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    cin>>test;
    ll money;
    while(test--)
    {
        cin>>n>>money;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(money>=arr[i])
            {
                cout<<1;
                money-=arr[i];
            }
            else
            cout<<0;

        }
        cout<<endl;

    }
}
