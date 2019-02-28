#include<bits/stdc++.h>
using namespace std;
long long int digitsum(long long int a)
{
    long long int sum=0;
    while(a!=0)
    {
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
int main()
{
    long long int test,a,b,c,d,i,j,k,n,m;
    long long int minn;
    int minindex;
    int index;
    cin>>test;
    while(test--)
    {
        cin>>n>>d;
       map <long long int ,int > mapp;
       mapp[n]=0;
       map< long long int ,int > temp;
       temp=mapp;
       // iterating through all the element and then do something
       // if find id not their then i think we can do something





    }
}



