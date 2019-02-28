#include <bits/stdc++.h>
using namespace std;
// more problematic situations is arrises due to inability to do the question
// of the segement tree and suffix tree or something like that
// then after that the question related to graph and the
// think dynamically accordingly for it
// basically what to say next regarding all these things to me and toa ll
int solve(vector<int> &arr)
{
    cout<<"here "<<endl;
    int n=arr.size();
    // thoose are prinme accordingly for it
    int i,j,k,l,sum,countt;
    int prime[10001]={0};
    prime[0]=1;
    prime[1]=1;
    for(i=2;i<=10000;i++)
    {
       // leave that i and rest of the entries will be chenged
       if(prime[i]!=1)
       {
           for(j=i*2;j<=10000;j+=i)
           {
               prime[j]=1;
           }
       }
    }
    for(i=0;i<200;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<"  ";
        }
    }
    countt=0;
    for(i=0;i<n;i++)
    {
        sum=arr[i];
        // if sum is the prime number
        if(!prime[sum])
        {
            countt++;
        }
        for(j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(!prime[sum])
            {
                countt++;
            }
        }
    }
    return countt;
}

int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,countt,sum;
   // cin>>test;
   // while(test--)
   // {
        cin>>n;
        vector<int> arr;
        int freq[n];
        for(i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        cout<<solve(arr)<<endl;



}
