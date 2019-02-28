#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,q,index,some,z1,z2;
    long long int countt;
    cin>>test;
    while(test--)
    {
        cin>>n>>z1>>z2;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        set<int> st;
        set<int>:: iterator itr;
        for(i=0;i<n;i++)
        {
            st.insert(arr[i]);
            st.insert(-arr[i]);
        }
        // case first accordingly for it
        int winner=-1;
        if(st.find(z1)!=st.end()||st.find(z2)!=st.end())
        {
            winner=1;
        }
        else
        {
            // he will try to choose an integer accordingly for it
            for(itr=st.begin();itr!=st.end();itr++)
            {
                if((st.find(z1-(*itr))==st.end())&&(st.find(z2-(*itr))==st.end()))
                {
                    winner =0;
                    break;
                }
            }
            if(winner!=0)
            {
                winner=2;
            }
        }
        cout<<winner<<endl;

    }
}

