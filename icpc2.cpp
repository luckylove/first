#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,d,i,j,k,l,n,m;
    cin>>test;
    string arr;
    while(test--)
    {
        cin>>arr;
        n=arr.size();
        a=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]=='.')
            {
                a++;
            }
        }
        if(a==n||a==n-1)
        {
            cout<<"safe"<<endl;
        }
        else
        {
            // now we need
             int diff=0;
            map<int,int> mapp;
             int prev=0;
             int countt=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]!='.')
                {
                    mapp[i]=(int)(arr[i]-'0');

                }

            }
            int store;
            int pos;
            int next;
            int nextpos;
            int flag=1;
            int storediff;
            //cout<<"mapp.size"<<mapp.size()<<endl;
            for(auto itr=mapp.begin();itr!=mapp.end();itr++)
            {
                store=itr->second;
                pos=itr->first;
                itr++;
                if(itr!=mapp.end())
                {
                    next=itr->second;
                    nextpos=itr->first;
                    if(nextpos-pos-1<next+store)
                    {
                       // cout<<"next"<<nextpos-pos-1<<endl;
                        flag=0;
                        break;
                    }
                    /*
                    if(nextpos-pos-1>next||nextpos-pos-1>store)
                    {

                    }
                    */
                    store=next;
                    pos=nextpos;


                }


            }
            if(flag==0)
            {
                cout<<"unsafe"<<endl;
            }
            else
            {
                cout<<"safe"<<endl;
                /*
                int prev=0;
                 for(auto itr=mapp.begin();itr!=mapp.end();itr++)
                 {
                     store=itr->first;
                    diff=itr->first-prev;
                    itr++;
                    if(itr!=mapp.end())
                    {
                        if(diff==itr->first-store||)

                    }
                 }
                 */


            }



        }
    }
}

