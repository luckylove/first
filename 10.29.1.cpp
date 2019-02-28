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
        int arr[n];
        for(i=0;i<n;i++)
        {
            si(arr[i]);
        }
        // we can take the array store;
        // having element equls to k/l;
        // then lets see what will happen accordingly for it
        // initially we have n element accordingly fo rit
        // multiple of our
        int ss=ceil((double)k/l);
        int store[ss]={0};
        for(i=0;i<n;i++)
        {
            store[arr[i]/l]++;
        }
        // that is in the time period of l
        // that much amount of element is added accordingly for it
        // new element accordingly
        int flag=m;
        // if flag==0;
       // then we break the loop accordingly for it
       int minn=100000000;
       for(i=0;i<ss;i++)
       {
           cout<<i*l<<" ";
       }
       cout<<endl;
       for(i=0;i<ss;i++)
       {
           cout<<store[i]<<" ";
       }
       cout<<endl;
       for(i=0;i<ss;i++)
       {
           // lets take one element is added every time
           buggg(minn,flag,i);
           minn=min(minn,flag);
           // for the next term
           if(minn==0)
           {
               break;
           }
           flag--;
           flag+=store[i];

       }

       cout<<(minn+1)*l<<endl;

    }
}










