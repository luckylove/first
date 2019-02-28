#include<bits/stdc++.h>
using namespace std;
// finding the nth root of the number accordingly for it ans to me and to all
// basically what to sya nex tbaout all these things accoridngly for it N
struct node
{
    int value;
    int index;
};
bool compare(struct node a,struct node b)
{
    if(a.value==b.value)
    {
        return a.index<b.index;
    }
    return a.value<b.value;
}
int main()
{
    int test,a,b,c,i,j,k,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        struct node arr[n*2];
        // now entry time
        for(i=0;i<n;i++)
        {
            cin>>arr[i].value;
            arr[i].index=1;

        }
        // now exit time
        for(i=n;i<n*2;i++)
        {
            cin>>arr[i].value;
            arr[i].index=2;
        }
        sort(arr,arr+2*n,compare);

        // now we need to do something
        int one=0;
        int storetime=0;
        int storeentry=0;
       // cout<<arr[0].value<<" ";
        for(i=0;i<2*n;i++)
        {
            if(arr[i].index==1)
            {
                one++;
            }
            else
            {
                one--;
            }
            if(storetime<one)
            {
                storetime=one;
                storeentry=arr[i].value;
            }


        }
        cout<<storetime<<" "<<storeentry<<endl;

    }
}

