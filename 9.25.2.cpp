#include<bits/stdc++.h>
using namespace std;
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
        for(i=0;i<n*2;i++)
        {
            cin>>arr[i].value;
            arr[i].index=1;
            i++;
            cin>>arr[i].value;
            arr[i].index=2;
            cout<<"i is "<<i<<endl;
        }
        sort(arr,arr+2*n,compare);
        cout<<"somethig"<<endl;
        for(i=0;i<n*2;i++)
        {
            cout<<arr[i].value<<"   "<<arr[i].index<<endl;
        }
        // now we need to do something
        int one=0;
        int two=0;
        cout<<arr[0].value<<" ";
        for(i=0;i<2*n;i++)
        {
            if(arr[i].index==1)
            {
                one++;
            }
            else
            {
                two++;
            }
            if(one==two)
            {
                cout<<arr[i].value<<" ";
                if(i+1<2*n)
                {
                    cout<<arr[i+1].value<<" ";
                }
            }
        }
        cout<<endl;

    }
}
