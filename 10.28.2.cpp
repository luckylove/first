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
    si(n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int one;
   int zero;
   int maxx=0;
   int maxlen=0;
    for(i=0;i<n;i++)
    {
        one=0;
        zero=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]==0)
            {
               zero++;
            }
            else
            {
                one++;
            }
            if((one-zero)>maxx)
            {
                maxlen=j-i+1;
                maxx=(one-zero);
            }
            else if((one-zero)==maxx&&maxlen<j-i)
            {
                maxlen=j-i+1;
            }
        }


    }
    cout<<maxlen<<endl;




}











