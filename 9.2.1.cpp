#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,s,a,b,c,d,n,m;
        cin>>n>>s;
        int arr[n];
        for(i=0;i<n;i++)
        {

            cin>>arr[i];
        }
        sort(arr,arr+n);
        // now then median is given to me and we need to do something
        // so that we can make it to be equalt o something
        for(i=0;i<n;i++)
        {
           cout<<arr[i]<<"   ";
        }
        cout<<endl;
        int original=n/2;
        int pos;
        for(i=0;i<n;i++)
        {
            if(arr[i]==s)
            {
                // median found
                pos=i;

            }
        }
        int countt=abs(original-pos);
        cout<<"countt is "<<countt<<endl;
        cout<<"pos is "<<pos <<endl;
        for(i=pos-1;i>=0;i--)
        {
            arr[i]=arr[pos]-arr[i];
        }
        for(i=pos+1;i<n;i++)
        {
            arr[i]=arr[i]-arr[pos];
        }
        for(i=0;i<n;i++)
        {
           cout<<arr[i]<<"   ";
        }
        cout<<endl;
        int sum=0;
        i=pos-1;
        j=pos+1;
        while(countt>0)
        {
            if(i>0&&j<n&&arr[i]<arr[j])
            {
                countt--;
                sum+=arr[i];
                i--;
            }
            else if(i>0&&j<n)
            {
                countt--;
                sum+=arr[j];
                j++;

            }
            else if(i<0)
            {
                countt--;
                sum+=arr[j];
                j++;
            }
            else
            {
                countt--;
                sum+=arr[i];
                i--;
            }
            cout<<"sum is"<<sum<<"i sis "<<i<<"j sis "<<j<<endl;
        }
        cout<<sum<<endl;

    }




