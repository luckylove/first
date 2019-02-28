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
    int test,a,b,c,d,i,j,k,n,m;
    si(test);
    while(test--)
    {
        si(n);
        si(m);
        int arr[n][m];
        ll sum[n];
        ll first[n];
        for(i=0;i<n;i++)
        {
            sum[i]=0;

            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
                // lets now include the last element
                if(j!=0)
                sum[i]+=arr[i][j];
            }
            if(i==0)
            {
                first[0]=arr[0][0];
            }
            else
            {
                first[i]=first[i-1]+arr[i][0];
            }
        }
        ll maxx=0;
      for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(i==0)
              maxx=max(maxx,sum[i]+sum[j]+first[j]);
              else
                maxx=max(maxx,sum[i]+sum[j]+first[j]-first[i-1]);
          }
      }
      cout<<maxx<<endl;


    }
}








