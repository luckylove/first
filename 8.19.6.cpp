#include <bits/stdc++.h>
using namespace std;
int main()
{

    int test,a,b,i,j,k,n,m,c,x,y,store,minn,countt;
    string arr;
    string brr;

    cin>>test;
    while(test--)
    {
        cin>>arr;
        n=arr.size();
        countt=0;
        for(i=0;i<n-3;i++)
        {
            if(arr[i]=='3')
            {
                countt++;
            }
        }
        if(countt>=3)
        {
            cout<<arr<<endl;
        }
        else if(countt==0)
        {
            strncpy(brr,arr,n-3);
            brr+=
        }
    }
}

