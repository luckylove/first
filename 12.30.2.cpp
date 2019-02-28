#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,i,j,k,a,b,c,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>k;
        i=1;
        int flag=0;
        while(1)
        {
            cout<<" i is "<<i<<endl;
            if(pow(k,i)>=n)
            {
                n=n-pow(k,i);
                if(flag==0)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                }
            }
            else if(pow(k,i)>=n)
            {
                n=n-pow(k,i);
                if(flag==0)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                }
            }
            else
            {
                break;
            }
            i++;
        }
        if(flag==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }




    }
}

