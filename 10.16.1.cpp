#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=1;
        int total=a[0],c=1;
        int newi;
        while(total<n)
        {
        newi=total+i;
        total=accumulate(a+i,a+i+total,total);
        i=newi;
        if(total<=n)
            c++;
        }
        cout<<c<<endl;

    }
}
