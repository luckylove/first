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
        int arr[n];
        int brr[n];
        for(i=0;i<n;i++)
        {
           si(arr[i]);
        }
        for(i=0;i<n;i++)
        {
           si(brr[i]);
        }
        set<int> st;
        st.insert(brr[n-1]);
        int reff=arr[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]>reff)
            {
                reff=arr[i];
                st.insert(brr[i]);
            }
        }
        cout<<st.size()<<endl;


    }
}





