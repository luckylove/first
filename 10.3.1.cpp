





#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    int index;
};
bool compare(struct node a,struct node b)
{
    if(a.data==b.data)
    {
        return a.index<b.index;
    }
    return a.data<b.data;
}
int main()
{
    int test,a,b,c,d,i,j,k,l,n,m;
    cin>>n;
    struct node arr[n*2];
    j=0;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        arr[j].data=a;
        arr[j].index=0;
        j++;
        arr[j].data=b;
        arr[j].index=1;
        j++;

    }
    sort(arr,arr+n*2,compare);
    int start=0;
    int endd=0;
    int maxx=0;
    for(i=0;i<2*n;i++)
    {
        if(arr[i].index==0)
        {
            start++;
        }
        else
        {
            endd++;
        }
        // now we need to find out the max of both of them
       // cout<<start<<"   "<<endd<<endl;
        maxx=max(maxx,start-endd);
    }
    cout<<maxx<<endl;

}
