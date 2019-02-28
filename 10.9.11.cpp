#include<bits/stdc++.h>
using namespace std;
// what we can use the binary search accordingly fo rit

struct node
{
    long long int product;
    long long int b;
};
bool compare(struct node x,struct node y)
{
    if(x.product==y.product)
    {
        return x.b>y.b;
    }
    return x.product>y.product;
}

int main()
{
    long long int test,a,b,c,d,i,j,k,l,n,m;
    cin>>n>>m;
    long long int arr[n];
    long long int brr[n];
    struct node my[n];
    long long int sum=0;
    long long int total=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        my[i].product=brr[i]*arr[i];
        my[i].b=brr[i];
    }
     sort(my,my+n,compare);
     /*
     for(i=0;i<n;i++)
     {
         cout<<my[i].product<<"  "<<my[i].b<<endl;
     }
     */
     if(total>m)
     {
         if(n==1)
         {
             // means we have only one element
             // we need to give m value to it accordingly for it
             cout<<my[0].product-my[0].b*m<<endl;

         }
         else
         {
             long long int diff;
             long long int temp;
             long long int countt;
             while(m>0)
             {
                 cout<<"in the main"<<endl;
                 diff=my[0].product-my[1].product;
                 cout<<"diff is "<<diff<<endl;
                 if(diff==0)
                 {
                     diff=my[0].b;
                 }
                 countt=ceil((double)diff/my[0].b);
                 cout<<"countt is "<<countt<<endl;
                 cout<<"m is "<<m<<endl;
                 if(countt>=m)
                 {
                     my[0].product=my[0].product-my[0].b*m;
                     m=0;
                     break;
                 }
                 else
                 {
                     my[0].product=my[0].product-my[0].b*countt;
                     m=m-countt;
                 }
                 cout<<"m here is  is "<<m<<endl;
                 temp=my[0].product;
                 cout<<"temp is "<<temp<<endl<<endl<<endl;

                 for(i=1;i<n&&m>0&&temp<my[i].product;i++)
                 {
                    diff=my[i].product-temp;
                    cout<<"diff is "<<diff<<endl;
                     if(diff==0)
                     {
                         diff=my[i].b;
                     }
                     countt=ceil((double)diff/my[i].b);
                      cout<<"countt is "<<countt<<endl;
                 cout<<"m is "<<m<<endl;
                     if(countt>=m)
                     {
                         my[i].product=my[i].product-my[i].b*m;
                         m=0;
                         break;
                     }
                     else
                     {
                         my[i].product=my[i].product-my[i].b*countt;
                         m=m-countt;
                     }
                      cout<<"m here is  is "<<m<<endl;
                 }
             }
             long long int maxx=0;
             for(i=0;i<n;i++)
             {
                 maxx=max(maxx,my[i].product);
             }
             cout<<maxx<<endl;
         }
     }
     else
     {
         cout<<0<<endl;
     }


}





