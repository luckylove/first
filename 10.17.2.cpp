#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bug(x) cout<<#x<<" :: "<<x<<"\n";
#define bugg(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define buggg(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
#define oo(x)   cout<<x
#define oe(x)   cout<<x<<endl
#define os(x)   cout<<x<<" "
typedef pair<int, int>	pi;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vll;
typedef vector<pi>		vpi;
typedef vector<pll>		vpll;
typedef map<int,int>    mapi;
typedef map<ll,ll>      mapll;
typedef multimap<int,int>    mmapi;
typedef multimap<ll,ll>      mmapll;
typedef set<int>        seti;
typedef set<ll>        setl;
typedef multiset<int>   mseti;
typedef multiset<ll>    msetl;
int reversenum(int c)
{
    int a=0;
    while(c!=0)
    {
        a=a*10+c%10;
        c=c/10;
    }
    return a;
}

int main()
{
  int a,b;
  int x,y;
  si(a);
  si(b);
  x=a;
  y=b;
  int c,d;
  c=0;
  while(a!=0)
  {
      if(a%10==6)
      {
          c=c*10+5;
      }
      else
      {
          c=c*10+a%10;
      }
      a=a/10;
  }

  d=0;
  while(b!=0)
  {
      if(b%10==6)
      {
          d=d*10+5;
      }
      else
      {
          d=d*10+b%10;
      }
      b=b/10;
  }
  c=reversenum(c);
  d=reversenum(d);

  cout<<c+d<<" ";
  c=0;
  a=x;
  b=y;
  while(a!=0)
  {
      if(a%10==5)
      {
          c=c*10+6;
      }
      else
      {
          c=c*10+a%10;
      }
      a=a/10;
  }

  d=0;
  while(b!=0)
  {
      if(b%10==5)
      {
          d=d*10+6;
      }
      else
      {
          d=d*10+b%10;
      }
      b=b/10;
  }
  c=reversenum(c);
  d=reversenum(d);
  cout<<c+d<<endl;



}





