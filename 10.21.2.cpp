#include<bits/stdc++.h>
using namespace std;
int findgcd(vector<int>& vt)
{
    int gcd=vt[0];
    int m=vt.size();
    int i;
    for(i=1;i<m;i++)
    {
        gcd=__gcd(vt[i],gcd);
    }
    return gcd;
}
bool isvalid(int* brr,int n,int* arr,int i)
{
    for(;i<n;i++)
    {
        if(arr[i]!=-1&&arr[i]!=brr[i])
        {
            return false;
        }

    }
    return true;
}
int main()
{
    int test,a,b,c,d,i,j,k,l,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        int count1=0;
        int count2=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==-1)
            {
                count1++;
            }
        }
        if(count1==n)
        {
            cout<<"inf"<<endl;
        }
        else
        {
            i=0;
            while(arr[i]==-1)
            {
                i++;
            }
            // now we get the first element whose value is non zero
            int brr[n];
            brr[i]=arr[i];
            for(j=i+1;j<n;j++)
            {
                brr[j]=brr[j-1]+1;
            }
            int flag=1;
            int store=i;
            for(i=0;i<n;i++)
            {
                cout<<brr[i]<<"   ";
            }
            cout<<endl;
            cout<<endl;
            if(isvalid(brr,n,arr,store))
            {

                    flag=0;
                    cout<<"inf"<<endl;
            }
            if(flag)
            {
               for(k=n-1;k>1;k--)
                {
                    int crr[n];
                    cout<<"k is "<<k<<endl;
                    for(i=0;i<n;i++)
                    {
                        if(brr[i]%k==0)
                        {
                            crr[i]=k;
                        }
                        else
                        crr[i]=brr[i]%k;
                        cout<<crr[i]<<"  ";
                    }
                    cout<<endl;
                    if(isvalid(crr,n,arr,store))
                    {
                        // then we get the maximum
                        cout<<k<<endl;
                        break;
                    }

                }
                if(k==1)
                {
                    cout<<"impossible"<<endl;
                }
            }

        }
    }
}

