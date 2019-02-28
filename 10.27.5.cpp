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
    int test,a,b,c,d,i,j,k,n,m,l;
    si(test);
    int x,y,z;
    while(test--)
    {
        si(n);
        si(k);
        if(n<(k*(k+1)/2))
        {
            cout<<-1<<endl;
        }
        else if(n<(k*(k+1)/2)+k)
        {
            cout<<0<<endl;
        }
        else
        {
            ll arr[k];
            ll rem=n-(k*(k+1)/2);
            // remaining amoung is
            for(i=0;i<k;i++)
            {
                arr[i]=i+1+rem/k;
            }
            if(rem%k!=0)
            {
                ll store=rem%k;
                for(i=k-1;store>0;i--)
                {
                    arr[i]++;
                    store--;
                }
            }
            for(i=0;i<k;i++)
            {
               // bug(arr[i]);
            }
            ll ans=1;
            for(i=0;i<k;i++)
            {
                ans=(((ans*arr[i])%1000000007)*(arr[i]-1))%1000000007;
            }
            cout<<ans<<endl;
        }




    }

}












