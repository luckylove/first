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
        string arr[n];
        // we have talking the stirng accordiingly for it
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                // inside or outside and remeining is something something
                if(i==0)
                {
                    // then means we are on the first line
                    if(j==0)
                    {
                        if(arr[i][j]=='.'&&(arr[i+1][j]!='.'||arr[i+1][j+1]!='.'||arr[i][j+1]!='.'))
                        {
                            flag=0;
                            break;
                        }
                    }
                    else if(j==m-1)
                    {
                        if(arr[i][j]=='.'&&(arr[i][j-1]!='.'||arr[i+1][j-1]!='.'||arr[i+1][j]!='.'))
                        {
                            flag=0;
                            break;
                        }
                    }
                    else
                    {
                        if(arr[i][j]=='.'&&(arr[i+1][j]!='.'||arr[i+1][j+1]!='.'||arr[i][j+1]!='.'))
                        {
                             if(arr[i][j]=='.'&&(arr[i][j-1]!='.'||arr[i+1][j-1]!='.'||arr[i+1][j]!='.'))
                            {
                                flag=0;
                                break;
                            }
                        }


                    }
                }
                else if(i==n-1)
                {
                   if(j==0)
                    {
                        if(arr[i][j]=='.'&&(arr[i-1][j]!='.'||arr[i-1][j+1]!='.'||arr[i][j+1]!='.'))
                        {
                            flag=0;
                            break;
                        }
                    }
                     else if(j==m-1)
                    {
                        if(arr[i][j]=='.'&&(arr[i-1][j-1]!='.'||arr[i-1][j]!='.'||arr[i][j-1]!='.'))
                        {
                            flag=0;
                            break;
                        }
                    }
                    else
                    {
                        if(arr[i][j]=='.'&&(arr[i-1][j]!='.'||arr[i-1][j+1]!='.'||arr[i][j+1]!='.'))
                        {
                            if(arr[i][j]=='.'&&(arr[i-1][j-1]!='.'||arr[i-1][j]!='.'||arr[i][j-1]!='.'))
                            {
                                flag=0;
                                break;
                            }
                        }
                    }
                }
                else if(j==0)
                {
                        if(arr[i][j]=='.'&&(arr[i-1][j]!='.'||arr[i-1][j+1]!='.'||arr[i][j+1]!='.'))
                        {
                            if(arr[i][j]=='.'&&(arr[i+1][j+1]!='.'||arr[i][j+1]!='.'||arr[i+1][j]!='.'))
                            {
                                flag=0;
                                break;
                            }
                        }
                }
                else if(j==m-1)
                {
                      if(arr[i][j]=='.'&&(arr[i-1][j]!='.'||arr[i-1][j-1]!='.'||arr[i][j-1]!='.'))
                        {
                            if(arr[i][j]=='.'&&(arr[i+1][j-1]!='.'||arr[i][j-1]!='.'||arr[i+1][j]!='.'))
                            {
                                flag=0;
                                break;
                            }
                        }
                }
                else
                {
                    // here we need to check four conditions accordingly for it
                        if(arr[i][j]=='.'&&(arr[i+1][j]!='.'||arr[i+1][j+1]!='.'||arr[i][j+1]!='.'))
                        {
                            if(arr[i][j]=='.'&&(arr[i][j-1]!='.'||arr[i+1][j-1]!='.'||arr[i+1][j]!='.'))
                                {
                                    if(arr[i][j]=='.'&&(arr[i-1][j]!='.'||arr[i-1][j+1]!='.'||arr[i][j+1]!='.'))
                                    {
                                         if(arr[i][j]=='.'&&(arr[i-1][j-1]!='.'||arr[i-1][j]!='.'||arr[i][j-1]!='.'))
                                        {
                                            flag=0;
                                            break;
                                        }
                                    }
                                }
                        }
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}










