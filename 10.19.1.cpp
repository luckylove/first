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

int main()
{
  string a,b;
  cin>>a;
  cin>>b;
  bugg(a,b);
  int n=a.size();
  int m=b.size();
  string c,d;
  c=a;
  d=b;
  string e,f;
  e=a;
  f=b;
  int i;
  bugg(n,m);
  for(i=0;i<n;i++)
  {
      if(c[i]=='6')
      {
          c[i]='5';
      }
  }
  for(i=0;i<m;i++)
  {
      if(d[i]=='6')
      {
          d[i]='5';
      }
  }
  for(i=0;i<n;i++)
  {
      if(e[i]=='5')
      {
          e[i]='6';
      }
  }
  for(i=0;i<m;i++)
  {
      if(f[i]=='5')
      {
          f[i]='6';
      }
  }
  bugg(c,d);
  bugg(e,f);
  cout<<stoi(c)+stoi(d)<<" ";
  cout<<stoi(e)+stoi(f)<<endl;




}






