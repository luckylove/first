// after the long time started again a littl bit
// you can do it shubham
// you are the best
// inclusive of 1 and N
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,j,k,m;
    int c;
    int total=1000;

    cin>>n>>c;
    int arr[n+2]={0};
    int brr[n+2]={0};
    // now we need to while out the value of some flag or some c is thiir

    // now we get the value of mid
    int start=1;
    int endd=n+1;
    int mid;
    mid=(start+endd)/2;
    int ans=n;
    while(start<endd&&total>0)
    {
       // cout<<"start is "<<start<<"    end is "<<endd<<endl;
       //cout<<"now mid is "<<mid<<endl;
        cout<<1<<" "<<mid<<endl;
        total--;
        cin>>a;
        if(a==1)
        {
            total-=c;
            // now we need to print the 2
            cout<<2<<endl;
            // it means we need to move backward accordingly for it
            arr[mid]=1;
            brr[mid]=1;
            ans=mid;
            endd=mid;
            mid=(start+endd)/2;
        }
        else
        {
            // now we need to move forward
            arr[mid]=1;
            brr[mid]=0;
            ans=mid;
            start=mid+1;

            mid=(start+endd)/2;

        }

        if(arr[mid]==1&&arr[mid-1]==1&&brr[mid]==1&&brr[mid-1]==0)
        {
            // means both are done
            ans=mid;
            //cout<<"ss"<<endl;
            break;
        }


    }
    cout<<3<<" "<<ans<<endl;
   // cout<<"ans is "<<ans<<endl;



}
