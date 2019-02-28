#include<bits/stdc++.h>
using namespace std;
int findgcd(vector<int>& vt)
{
    int gcd=vt[0];
    int m=vt.size();
    int i;
    for(i=1;i<m;i++)
    {
        gcd=__gcd(vt[i],gcd);
    }
    return gcd;
}
int main()
{
    int test,a,b,c,d,i,j,k,l,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        int count1=0;
        int count2=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==-1)
            {
                count1++;
            }
            else if(arr[i]==i+1)
            {
                count2++;
            }
        }
        if(count1+count2==n)
        {
            cout<<"inf"<<endl;
        }
        else
        {
            vector <int> vt;
            int flag=1;
            int maxx=-1;
            for(i=0;i<n;i++)
            {
                // if this is the >0
                if(arr[i]!=-1)
                {
                    if((i-(arr[i]-1))<0)
                    {
                        flag=0;
                        break;
                    }
                    else if(i-(arr[i]-1)>0)
                    {
                        vt.push_back(i-(arr[i]-1));
                    }
                    else
                    {
                        maxx=max(maxx,arr[i]);
                    }
                }
            }
            if(flag=0)
            {
                cout<<"impossible"<<endl;
            }
            else
            {
                //cout<<"maxx is "<<maxx<<endl;
                //cout<<"gcd is "<<findgcd(vt)<<endl;
                if(maxx==-1)
                {
                    // we need to cout the gcd of all the numbers
                    if(vt.size()>0)
                    {
                        if(findgcd(vt)>1)
                        {
                            cout<<findgcd(vt)<<endl;
                        }
                        else
                        {
                            cout<<"impossible"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"impossible"<<endl;
                    }

                }
                else
                {
                    m=vt.size();
                    if(findgcd(vt)%maxx==0)
                    {
                        cout<<findgcd(vt)<<endl;
                    }
                    else
                    {
                        cout<<"impossible"<<endl;
                    }
                }
            }
        }
    }
}
