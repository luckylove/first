#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,s,a,b,c,d,n,m;

    string arr;
    string brr;
        cin>>n;
        cin>>arr;
        cin>>brr;
        int countt=0;
        for(i=0;i<n;i++)
        {
            if(i+1<n)
            {
                if(arr[i]!=brr[i]&&arr[i+1]!=brr[i+1]&&arr[i]==brr[i+1]&&brr[i]==arr[i+1])
                {
                    countt++;
                    i++;
                }
                else if(arr[i]!=brr[i])
                {
                    countt++;
                }
            }
            else
            {
                if(arr[i]!=brr[i])
                {
                    countt++;
                }
            }

        }
        cout<<countt<<endl;


}





