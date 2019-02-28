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
        int arr[n];
        int brr[n];
         int xmove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
         int ymove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
         vector<int> vt1;
         vector<int> vt2;
        for(i=0;i<n;i++)
        {
           si(arr[i]);
           si(brr[i]);
           vt1.push_back(arr[i]);
           vt2.push_back(brr[i]);
           for(j=0;j<8;j++)
           {
               vt1.push_back(arr[i]+xmove[j]);
               vt2.push_back(brr[i]+ymove[j]);
           }
        }
        for(i=0;i<vt1.size();i++)
        {
            //bugg(vt1[i],vt2[i]);
        }
        cin>>a>>b;
        m=vt1.size();
        int flag1=0;
        int flag2=0;
        int flag3=0;
        int flag4=0;
        int flag5=0;
        for(i=0;i<m;i++)
        {
                   if(vt1[i]==a&&vt2[i]==b)
                    flag1=1;
                    if(vt1[i]==a+1&&vt2[i]==b)
                    flag2=1;
                    if(vt1[i]==a-1&&vt2[i]==b)
                    flag3=1;
                    if(vt1[i]==a&&vt2[i]==b-1)
                    flag4=1;
                    if(vt1[i]==a&&vt2[i]==b-1)
                    flag5=1;
        }
        if(flag1&&flag2&&flag3&&flag4&&flag5)
        //if(findpoint(vt1,vt2,a,b)&&findpoint(vt1,vt2,a+1,b)&&findpoint(vt1,vt2,a-1,b)&&findpoint(vt1,vt2,a,b-1)&&findpoint(vt1,vt2,a,b+1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}






