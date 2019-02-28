#include<bits/stdc++.h>
using namespace std;
int main()
{
    // for this i can use the mapp accordingly for it
    // basically what to say nex about all these things to me and to all
    // i need to do one thing that is the make them differnet accordingly for it
    // basically what to say next about all these situationsf or all ans tome and toa
    // all basically what to say next abotu all these istuatonf or all ans tome and toa ll
    int test,a,d,b,c,i,j,m,n;
    int store,x,y;
    cin>>n>>x>>y;
    store=(x+1)/y;
    long long int sum=0;
    int arr[n];
    set<int> st;
    map<int,int> mapp;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
        mapp[arr[i]]++;
    }
    // now we need to move form the mapp and fiind the elment in the set
    // accordingly for ti
    long long int diff=0;
   // cout<<"stor is "<<store<<endl;
    long long int amount=0;
    long long int diffcount;
    for(auto itr=mapp.begin();itr!=mapp.end();itr++)
    {
        if((itr->second)  >1)
        {
            // means  the number of element is greater than one
             diff=(itr->second)-1;
             diffcount=diff;
             // we can subtrace at most the store digits accordingly form it
             amount=0;
            // cout<<"diff here si "<<diff<<endl;
             for(j=itr->first-1;j>=itr->first - store&&diff>0;j--)
             {
                 if(st.find(j)==st.end())
                 {
                     // means the element is fount accordingly for ti
                     // then in that situation
                     amount+=(itr->first)-j;
                     st.insert(j);
                     diff--;
                 }
             }
            // cout<<"amount is "<<amount<<endl;
            // cout<<"diff is "<<diff<<endl;
            // cout<<"diffcount is "<<diffcount<<endl;

             if(diff==0)
             {
               //  cout<<"ss"<<endl;
                 sum+=amount*y;
             }
             else if(diff==diffcount)
             {
                 sum+=diff*x;
                // cout<<"uu"<<endl;
                 // and we have to erase that eleemnt as well
                 st.erase(st.find(itr->first));
             }
             else
             {
                 // means some is their
                // cout<<"g"<<endl;
                 sum+=amount*y+(diffcount-diff)*x;
             }
             //cout<<sum<<endl;

        }

    }
    for(auto itr=st.begin();itr!=st.end();itr++)
    {
        cout<<*itr<<"  ";
    }
     cout<<sum<<endl;



}

