#include<iostream>
using namespace std;

int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        while(arr[i]<0)
        {
            i++;
        }
        if(i<n)
        {
            int start=-1;
            start=i;
            int sum=0;
            int maxx=0;
            int storestart=-1;
            int storeend=-1;

            for(;i<n;)
            {
                if(arr[i]>0)
                {
                    sum+=arr[i];
                    i++;
                }
                else
                {

                    if(maxx<sum)
                    {
                        maxx=sum;

                        storestart=start;
                        storeend=i-1;
                    }
                    else if(maxx==sum)
                    {
                        if(i-1-start>storeend-storestart)
                        {
                            storestart=start;
                            storeend=i-1;
                        }
                    }
                    sum=0;
                    while(arr[i]<0&&i<n)
                    {
                        i++;
                    }
                    if(i<n)
                    start=i;
                }
            }
                 if(maxx<sum)
                    {
                        maxx=sum;
                        sum=0;
                        storestart=start;
                        storeend=i-1;
                    }
                    else if(maxx==sum&&start!=storestart)
                    {
                        if(i-1-start>storeend-storestart)
                        {
                            storestart=start;
                            storeend=i-1;
                        }
                    }
                    for(j=storestart;j<=storeend;j++)
                    {
                        cout<<arr[j]<<" ";
                    }
                    cout<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
}

