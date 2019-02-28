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
        sort(arr,arr+n);
        // if we talk the multiple of l then what we an can do
        // prefer karega pahale wale time pe aana accordingly fo rit
        // at any time with the multiple of l
        // what i did i just find out the no of reminining element
        // and at the end just add the remaining elements accordingly fo ri
        // form l=0;
        // to l we can do this
        // ceil we can talk then what will happen

       mapi mapp;
       for(i=0;i<n;i++)
       {
           mapp[arr[i]/l]++;
       }
       mapp[k/l]++;
       ll minn=m;
       // how much added accordingly for it
       // can we store it in value and something pair just for the easyness accordingly
       // for it to me and to all what to say next about all these things
       // at l equal to 12 i just removes the remining element then try to add
       // the new element accordingly for it
       int store=0;
       bug(minn);
       bug(l);
       // what is denoted by the itr->first accordingly for it

       for(auto itr=mapp.begin();itr!=mapp.end();itr++)
       {
         bugg(itr->first,itr->second);

        if(((m+store)-itr->first)<minn)
        {
            minn=m+store-itr->first;
        }
        bug(minn);
        store=itr->second;
       }
       cout<<(minn+1)*l<<endl;






    }

}










