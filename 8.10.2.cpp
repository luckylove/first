#include <bits/stdc++.h>
using namespace std;
/*
bool compare(pair< int ,int > p1,pair<int ,int > p2)
{
   // i need to return at the time of compar
   if((p1.first)!=(p2.first))
   {
       return (p1.first)<(p2.first);
   }
   else
   {
       return (p1.second)<(p2.second);
   }

}
*/
struct something
{
    int a;
    int b;
};
bool compare(const struct something& one,const struct something& two)
{
    return (one.a)<(two.a);
}

int main()
{
   int test,i,j,k,n,m,a,b,c,countt,temp,store,sum,p,s;
   cin>>p>>s;
   struct something arr[p][s];
   for(i=0;i<p;i++)
   {

       for(j=0;j<s;j++)
       {

           cin>>(arr[i][j].a);
       }
       for(j=0;j<s;j++)
       {

           cin>>(arr[i][j].b);
       }
   }
 //  vector <pair <int ,int > > vt;
 for(i=0;i<p;i++)
 {
      sort(arr[i],arr[i]+s,compare);
 }

   vector <int> sub[30];
   for(i=0;i<p;i++)
   {
       countt=0;
       for(j=0;j<s-1;j++)
       {

           if(arr[i][j].b>arr[i][j+1].b)
           {

               countt++;
           }
           //cout<<arr[i][j].b<<"  "<<arr[i][j+1].b<<" countt is "<<countt<<endl;

       }
       //cout<<i+1<<" countt is "<< countt<<endl;
       sub[countt].push_back(i+1);
       //vt.push_back(make_pair(countt,(i/2)+1 ) );
   }
   /*
   for(i=0;i<vt.size();i++)
   {
       cout<<vt[i].second<<"  "<<vt[i].first<<endl;
   }
   */
   //sort(vt.begin(),vt.end(),compare);
   /*
   for(i=0;i<vt.size();i++)
   {
       cout<<vt[i].second<<endl;
   }
   */
   //cout<<endl;
   for(i=0;i<30;i++)
   {

       for(j=0;j<sub[i].size();j++)
       {
           cout<<sub[i][j]<<endl;
       }
   }




}
/*
3
3
16
24
60
498
861
589
14
24
62
72
557
819
16
15
69
435
779
232
*/
