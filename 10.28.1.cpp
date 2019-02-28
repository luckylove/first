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
    // we need to find out the maximum googness
    int one[n]={0};
    int two[n]={0};
    a=0;
    b=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            a++;
        }
        else
        {
            b++;
        }
        one[i]=a;
        two[i]=b;
    }
    // to calculathe maximum length
    // so we have n values accordingly for it
    for(i=0;i<n;i++)
   {
       cout<<one[i]<<" ";
   }
   cout<<endl;
    for(i=0;i<n;i++)
   {
       cout<<two[i]<<" ";
   }
   cout<<endl;



    int maxx=0;
    int maxxlen=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            // difference between one and zero
            bug(abs(one[j]-one[i-1]-two[j]+two[i-1]));
            if(maxx<abs(one[j]-one[i-1]-two[j]+two[i-1]))
            {
                maxxlen=j-i+1;
                maxx=abs(one[j]-one[i-1]-two[j]+two[i-1]);
            }
            else if(maxx==abs(one[j]-one[i-1]-two[j]+two[i-1])&&maxxlen<j-i+1)
            {
                 maxxlen=j-i+1;
            }
            //bug(maxxlen);
        }
        cout<<endl;
        cout<<endl;

    }
    cout<<maxxlen<<endl;




}











