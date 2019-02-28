#include<bits/stdc++.h>
using namespace std;
// first i insert the corresponding item then after that i find out all the
// characters whose value if greater then its countt
struct node
{
    int b;
    int a;
};
bool compare(struct node one,struct node two)
{
    return one.b<two.b;
}
int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,countt,sum,maxx;

    cin>>test;
    while(test--)
    {
        cin>>n;
        struct node arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i].a>>arr[i].b;
        }
        sort(arr,arr+n,compare);
        // now the n too arranges but not in the shorted order
        // how to preprocess it accordingly for it
        /*
        for(i=0;i<n;i++)
        {
            cout<<arr[i].b<<"   "<<arr[i].a<<endl;
        }
        */
        maxx=1;
        map<int,int> mapp;
        map<int,int> :: iterator itr;
        for(i=0;i<n;i++)
        {

            sum=0;
            /*
            for(j=i-1;j>=0;j--)
            {
                if(arr[j].a>arr[i].b)
                    sum++;
            }
            */
            // iterate over the map
             mapp[arr[i].a]++;
             cout<<"ss"<<arr[i].b<<"   "<<mapp.end()-mapp.upper_bound(arr[i].b)<<endl;

            for(itr=mapp.upper_bound(arr[i].b);itr!=mapp.end();itr++)
            {
                    sum+=itr->second;

            }
            maxx=max(sum,maxx);

        }
        cout<<maxx<<endl;

    }

}

