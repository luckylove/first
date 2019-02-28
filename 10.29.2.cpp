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
        si(m);
        si(k);
        si(l);
        int arr[n+1];
        for(i=0;i<n;i++)
        {
            si(arr[i]);
        }
        arr[n]=k;
        sort(arr,arr+n);
        int store[n+1];
        store[0]=m;
        // store denotes the number of element at that particular time
        for(i=1;i<n+1;i++)
        {
            store[i]=store[i-1]+1;
        }
        int minn=2000000000;
       // bug(minn);
        for(i=0;i<n;i++)
        {
            //bug(store[i]*l-arr[i]+l);
           // minn=min(minn,store[i]*l-arr[i]+l);
            //if(minn==0)
              //  break;
            if((m+i+1)*l<arr[i])
            {
                minn=0;
                break;
            }
            else
            {
                a=(m+i+1)*l-arr[i];
                minn=min(minn,a);
            }
        }

        minn=min(minn,(n+m+1)*l-k);
        cout<<minn<<endl;
    }
}













