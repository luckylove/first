#include<bits/stdc++.h>
using namespace std;
main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>ar;
         int ans=0;
        for(long long i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(ar[s])
                ans+=(ar[s]/2);
            else
            {
                int temp=2;
                for(long long i=1;i<s.length();i++)
                {
                    if((s[i-1]=='d'||s[i-1]=='f')&&(s[i]=='d'||s[i]=='f'))
                        {temp+=4;}
                        else if((s[i-1]=='j'||s[i-1]=='k')&&(s[i]=='j'||s[i]=='k'))
                        {temp+=4;}
                        else
                            {temp+=2;}

                }
                ar[s]=temp;
                ans+=temp;

            }


        }
          cout<<ans<<endl;
    }
}
