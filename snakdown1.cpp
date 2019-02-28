#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    int test,a,b,c,n,i,j,k;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll sum=arr[0];
        ll sumstore=arr[0];
        int start=1;
        int days=1;
        ll total=0;
        while(sumstore<n)
        {
            sum=sumstore;
            for(i=start;i<min(start+sumstore,(ll)n);i++)
            {
              sum+=arr[i];
            }
            if(i==n)
            {
                break;
            }
            days++;
            start=start+sumstore;
            sumstore=sum;
            //cout<<"store sum"<<sumstore<<endl;
           // total+=sumstore;
           // cout<<"total is"<<total<<endl;
           // cout<<"start"<<start<<endl;

        }
        cout<<days<<endl;

    }
}
