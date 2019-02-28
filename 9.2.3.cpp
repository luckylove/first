#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,s,a,b,c,d,n,m;
    cin>>n;
    int countt=0;
    int x=1;
    while(n>x)
    {
        countt++;
        n=n-x;
        x=x*2;
    }
    if(n!=0)
    {
        countt++;
    }
    cout<<countt<<endl;

}





