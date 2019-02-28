#include<bits/stdc++.h>
using namespace std;
int main()
{
    // for this i can use the mapp accordingly for it
    // basically what to say nex about all these things to me and to all
    int test,a,d,b,c,i,j,m,n;
    int store,x,y;
    cin>>n>>x>>y;
    store=x/y;
    int brr[101]={0};
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        brr[a]++;
    }
    // we store the value directly in the hash accordingly for it
    // now we need to start with the
    // value start with the one only
    int index=-store+1;
    // at each and every point the index will increases itself accordingly for it
    // else remaining elements we need to remove accordngly for it
    cout<<"store is "<<store<<"index is "<<index<<endl;
    int diff=0;
    int diffcount=0;
    int amount=0;
    for(i=1;i<=100;i++)
    {
        cout<<" is is "<<i<<"index is "<<index<<endl;
        if(brr[i]<=1)
        {
            // then no problem with this
            index++;
        }
        else if(brr[i]>1)
        {
            // now we need to do something accordingly for it
            diff=brr[i]-1;
            cout<<"diff is "<<diff<<endl;
            diffcount=0;
            amount=0;
            for(j=index;j<i;j++)
            {
                if(j<1)
                {
                    diffcount++;
                    amount+=i-j;
                }
                else if(j>=1&&brr[j]==0)
                {
                    diffcount++;
                    amount+=i-j;
                }

                if(diffcount==diff)
                {
                    break;
                }
            }
            // diffocuntt is the available space that we have with us
            index=j+1;
            cout<<"diffcoutn is "<<diffcount<<endl;
            cout<<"index is "<<index<<endl;
            if(diff==diffcount)
            {
                // means we have the required data acordingly for it
                // but where is the again topinc of fact accordigly for it
                // can we calculate it later accoridngly for it
                // i don't think that we can do thsi accordingly for it
                // then what we have to do
                brr[i]=1;
                sum+=amount*y;

            }
            else if(diffcount==0)
            {
                // then we much have to remove the element
                sum+=brr[i]*x;
                brr[i]=0;
            }
            else
            {
                // means diffcount is less thean so
                 brr[i]=1;
                sum+=amount*y+(diff-diffcount)*x;
            }


        }
        cout<<sum<<endl;

    }
    cout<<sum<<endl;


}
