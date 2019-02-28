#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> vt)
{

    int i;
    for(i=0;i<vt.size();i++)
    {
        cout<<vt[i]<<"  ";
    }
    cout<<endl;
}
void printarray(int* arr,int n)
{
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<"  ";
     }
     cout<<endl;
     return;
}
int main()
{
    int test,i,j,k,s,a,b,c,d,n,m;
    cin>>n;
    vector<int> arr[n+1];
    m=n-1;
    while(m--)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);

    }
    int brr[n];
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    int marked[n+1]={0};
   vector<int> vt;
   vector<int> ct;

   vt.push_back(brr[0]);
   marked[brr[0]]=1;
   int total=n;
   total=n-1;
   int index=1;
   int summ;
   int flag=1;
  // printarray(marked,n+1);
   while(total>0)
   {
       for (i=0;i<vt.size();i++)
       {
           for(j=0;j<arr[vt[i]].size();j++)
           {
               if(marked[arr[vt[i]][j]]==0)
               {
                  ct.push_back(arr[vt[i]][j]);
                   marked[arr[vt[i]][j]]=1;
               }

           }
       }
       // we need to start with the what
      // printvector(ct);
      // printarray(marked,n+1);
       summ=ct.size();
       // means the number of element in the next level
       // now we need to check the element of the level
       // whether it is present in the level or not
       for(i=index;i<index+summ;i++)
       {
           /*
           for(j=0;j<ct.size();j++)
           {
               if(ct[j]==brr[i])
                break;
           }
           if(j==ct.size())
           {
               // it means not foudn then at that time
               flag=0;
               break;
           }
           */
           if(std::find(ct.begin(),ct.end(),brr[i])==ct.end())
           {
               // it means it is found int the integer accordingly for it
               // o no problem
              // cout<<"ct.size()"<<ct[0]<<endl;
              // cout<<"brr[i[ s "<<brr[i]<<endl;
               flag=0;
               break;
           }

       }
       index+=summ;
       total=total-summ;
       vt.swap(ct);
       ct.clear();



   }
   if(flag==1)
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }

}






