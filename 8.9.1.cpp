#include<bits/stdc++.h>
using namespace std;

long long int dosomething(int a,int n)
{
    if(a==0)
    {
        if(n==0||n%3==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return dosomething(a-1,n+1)+dosomething(a-1,n-1);

}
int main()
{
    int test,a,b,d,c,i,j,k,n,m,l,q,r;
    int store1,store2;
        cin>>n;
       if(n==0||n==1)
       {
           cout<<0<<endl;
       }
       else
       {
           cout<<(dosomething(n,0))%1000000007<<endl;
       }


}

