#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        int arr[n];
        int brr[m];
        set<int> st;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        for(j=0;j<m;j++)
        {
            cin>>brr[j];
        }
        for(i=0;i<m;i++)
        {
            if(st.find(brr[i])==st.end())
            {
                break;
            }

        }
        if(i==m)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }


    }
}
