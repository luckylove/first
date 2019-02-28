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

ll dosomething(int m,int k)
{
    ll ans=1;
    int i;
    for(i=0;i<k;i++)
    {
        ans=(ans*(m-i))%1000000007;
    }
    return ans;

}
int main()
{
    ll test,a,b,c,d,i,j,k,n,m,l;
    ll ans;
    cin>>n>>m>>k;
    if(n==k)
    {
        cout<<dosomething(m,k)<<endl;
    }
    else if(n>k&&n<2*k)
    {
        ans=dosomething(m,k);
        ans=(ans*dosomething(m-(2*k-n),n-k))%1000000007;
        cout<<ans<<endl;
    }
    else if(n==2*k)
    {
        cout<<(dosomething(m,k)*dosomething(m,k))%1000000007<<endl;
    }
    else
    {
        // means n is greater than 2*k
        int ans=1;
        for(i=0;i<n-2*k;i++)
        {
            ans=(ans*m)%1000000007;
        }
        ans=(ans*dosomething(m,k))%1000000007;
        ans=(ans*dosomething(m,k))%1000000007;
        cout<<ans<<endl;
    }






}











