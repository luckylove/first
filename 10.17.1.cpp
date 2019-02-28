#include<bits/stdc++.h>
using namespace std;

struct node
{
    int a,b,c;
};
bool compare(struct node x,struct node y)
{
    if(x.a==y.a&&x.b==y.b)
    {
        return x.c>=y.c;
    }
    else if(x.a==y.a)
    {
        return x.b>y.b;
    }
    return x.a>y.a;
}
int main()
{
    int test,n,i,j,k;
    cin>>test;
    while(test--)
    {
       struct node some[3];
        n=3;
        for(i=0;i<n;i++)
        {
            cin>>some[i].a>>some[i].b>>some[i].c;
        }
        sort(some,some+3,compare);
        // now we need to do something
        for(i=0;i<n;i++)
        {
           // cout<<some[i].a<<"  "<<some[i].b<<"   "<<some[i].c<<endl;
        }
        int countt;
        if(some[0].a>=some[1].a&&some[0].b>=some[1].b&&some[0].c>=some[1].c)
        {
            // then we move to next
            countt=0;
            if(some[0].a>some[1].a)
            {
                countt++;
            }
            if(some[0].b>some[1].b)
            {
                countt++;
            }
            if(some[0].c>some[1].c)
            {
                countt++;
            }
            if(countt==0)
            {
                cout<<"no"<<endl;
            }
            else
            {
                    if(some[1].a>=some[2].a&&some[1].b>=some[2].b&&some[1].c>=some[2].c)
                    {
                        // then we move to next
                        countt=0;
                        if(some[1].a>some[2].a)
                        {
                            countt++;
                        }
                        if(some[1].b>some[2].b)
                        {
                            countt++;
                        }
                        if(some[1].c>some[2].c)
                        {
                            countt++;
                        }
                        if(countt==0)
                        {
                            cout<<"no"<<endl;
                        }
                        else
                        {
                            cout<<"yes"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"no"<<endl;
                    }
            }
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
}


