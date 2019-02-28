#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int test,a,b,c,n,i,j,k,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        int brr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        int flag=1;
        int crr[n];
        for(i=0;i<n;i++)
        {
            crr[i]=brr[i]-arr[i];
            if(crr[i]<0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for(i=0;i<n-2;i++)
            {
                if(crr[i]<0)
                {
                    flag=0;
                    break;
                }
                while(crr[i]>0)
                {
                    crr[i]-=1;
                    crr[i+1]-=2;
                    crr[i+2]-=3;
                }
            }
            if(crr[n-1]!=0||crr[n-2]!=0)
                flag=0;
        }
        if(flag==0)
        {
            cout<<"NIE"<<endl;
        }
        else
        {
            cout<<"TAK"<<endl;
        }


    }

}


