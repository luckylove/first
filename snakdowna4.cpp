#include<bits/stdc++.h>
using namespace std;
bool isvalid(int x,int y,int n,int m)
{
    if(x<0||x>=n)
        return false;
    if(y<0||y>=m)
        return false;
    return true;
}
int main()
{
    int test,i,j,k,n,m,a,b,c,d,x,y;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        string arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
            int countt;
            for(d=1;d<=n+m-2;d++)
            {
                // now we have the value of d
                countt=0;
                for(i=0;i<n;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        if(arr[i][j]=='1')
                        {
                            for(x=d;x>=0;x--)
                            {
                                y=d-x;
                                if(isvalid(x+i,j+y,n,m)&&arr[i+x][j+y]=='1')
                                {
                                    countt++;
                                }
                                if(isvalid(i-x,j-y,n,m)&&arr[i-x][j-y]=='1')
                                {
                                    countt++;
                                }
                                if(x!=d&&x!=0&&isvalid(i+x,j-y,n,m)&&arr[i+x][j-y]=='1')
                                {
                                    countt++;
                                }
                                if(x!=d&&x!=0&&isvalid(i-x,j+y,n,m)&&arr[i-x][j+y]=='1')
                                {
                                    countt++;
                                }

                            }




                        }
                       }
                }
                cout<<countt/2<<" ";
            }
            cout<<endl;
        }


}

