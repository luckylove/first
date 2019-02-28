#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,i,j,k,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        sort(arr,arr+n);
        int start=0;
        int endd=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>k)
            {
                start=i;
                break;
            }
        }
        if(start!=n-1)
        {
            // then we need to find out the endd
            int diff=0;
            endd=n-2;
            // endd is the n-2 elements accordingly for it
            //cout<<"start"<<start<<endl;
            //cout<<"endd"<<endd<<endl;
            while(start!=endd)
            {
                if(arr[start]-k<=arr[endd]-k)
                {
                    diff=arr[start]-k;
                    arr[start]-=diff;
                    arr[endd]-=diff;
                    start++;
                }
                else
                {
                    diff=arr[endd]-k;
                    arr[start]-=diff;
                    arr[endd]-=diff;
                    endd--;

                }
               // cout<<"start here is "<<start<<"arr[starti s]"<<arr[start]<<endl;
               // cout<<"endd here is "<<endd<<"arr[endds] sis "<<arr[endd]<<endl;
            }
            // means here the start is equal to endd
            diff=arr[start]-k;
            arr[n-1]-=diff;
            arr[start]-=diff;
            cout<<accumulate(arr,arr+n,0)<<endl;
        }
        else
        {
            cout<<accumulate(arr,arr+n,0)<<endl;
        }
    }
}
