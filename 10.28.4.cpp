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
    ll test,a,b,c,d,i,j,k,n,m,l;
    ll ans;
    ll x;
    cin>>n>>m>>x;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         cin>>arr[i][j];
        }
    }
    ll sum=0;
    ll ele=0;
    int flag=0;
    for(k=min(n,m);k>0;k--)
    {
        for(i=0;i<=n-k;i++)
        {
            for(j=0;j<=m-k;j++)
            {
             // form j=0 to we move towards n
              sum=0;
              for(a=i;a<i+k;a++)
              {
                  for(b=j;b<j+k;b++)
                  {
                      sum+=arr[a][b];
                  }
              }
             // bugg(sum,k);
              if(sum<=x)
                 {
                   ele=k*k;
                    flag=1;
                   break;
                 }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    cout<<ele<<endl;






}












