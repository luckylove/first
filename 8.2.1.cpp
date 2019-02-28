#include<bits/stdc++.h>
using namespace std;
int countt(int*arr,int n)
{
    int i,j;
    if(*((arr+0*n)+0)==-1||*((arr+(n-1)*n)+n-1)==0)
    //if(arr[0][0]==-1||arr[n-1][n-1]==0)
    {
      return 0;
    }
    for(i=0;i<n;i++)
    {
        if(*((arr+i*n)+0)==0)
        {
            *((arr+i*n)+0)=1;
        }
        else
        break;
    }
    for(i=0;i<n;i++)
    {
        if(*((arr+0*n)+i)==0)
        {
            *((arr+0*n)+i)=1;
        }
        else
        break;
    }
    // now
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(*((arr+(i-1)*n)+j)>0)
            {
                // means not blocked then
                *((arr+(i)*n)+j)+=*((arr+(i-1)*n)+j);
            }
            if(*((arr+(i)*n)+j-1)>0)
            {
                *((arr+(i)*n)+j)+=*((arr+(i)*n)+j-1);
            }
        }
    }
    return*((arr+(n-1)*n)+n-1);
}
int main()
{
    int i,j,k,l,m,a,b,c,d,n,test;
     long long int sum1,sum2;
     cin>>test;
    while(test--)
   {

       cin>>n;
       int arr[n][n];

       for(i=0;i<n;i++)
       {
          for(j=0;j<n;j++)
           {
               //  -1 represents the blocked path
               cin>>arr[i][j];
               if(arr[i][j]==1)
               {
                   arr[i][j]=-1;
               }
           }
       }
       cout<<countt((int*)arr,n)<<endl;
   }
}
