#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int zero;
    long long int one;
};

int main()
{
   int test,a,b,c,d,i,j,k,l,n,m;
   cin>>test;
   while(test--)
   {
       cin>>n;
      struct node prev;
      struct node next;
      m=1000000007;
      if(n==1)
      {
          cout<<2<<endl;
      }
      else
      {
          prev.zero=1;
          prev.one=1;
          n--;
          while(n--)
          {
              next.one=prev.zero;
              next.zero=(prev.zero+prev.one)%m;
              prev=next;
          }
          cout<<(next.one+next.zero)%m<<endl;

      }
   }
}
