#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,i,j,k,l,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        string arr[n];
        int brr[n];
        int crr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            brr[i]=arr[i].size();
        }
        int temp;
        for(i=0;i<n;i++)
        {
            temp=2;
            for(j=1;j<brr[i];j++)
            {
                if(arr[i][j-1]=='f'||arr[i][j-1]=='d')
                {
                    if(arr[i][j]=='f'||arr[i][j]=='d')
                    {
                        temp+=4;
                    }
                    else
                    {
                        temp+=2;
                    }
                }
                else
                {
                    if(arr[i][j]=='f'||arr[i][j]=='d')
                    {
                        temp+=2;
                    }
                    else
                    {
                        temp+=4;
                    }
                }
            }
            crr[i]=temp;
        }
        set< string > st;
        int ans=0;

        for(i=0;i<n;i++)
        {
            if(st.find(arr[i])==st.end())
            {
                ans+=crr[i];
                st.insert(arr[i]);
            }
            else
            {
                ans+=(crr[i]/2);
            }

        }
        cout<<ans<<endl;

    }
}
