#include<iostream>
using namespace std;

int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int start=-1;
        int startstore=-1;
        int countt=0;
        int countstore=0;
        int sum=0;
        int maxsum=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>0&&start==-1)
            {
                start=i;
                countt++;
                sum+=arr[i];
            }
            else if(arr[i]>0)
            {
                sum+=arr[i];
            }
            else
            {
                // means negative comes if
                if(start!=-1)
                {
                  if(sum>maxsum)
                  {
                      startstore=start;
                      countstore=countt;
                      countt=0;
                      start=-1;
                      sum=0;
                  }
                  else if(sum==maxsum&&countstore<countt)
                  {
                      startstore=start;
                      countstore=countt;
                      countt=0;
                      start=-1;
                      sum=0;
                  }
                }
                else
                {
                    // do nothing
                }
            }
        }
        if(start!=-1)
        {
               if(sum>maxsum)
                  {
                      startstore=start;
                      countstore=countt;
                      countt=0;
                      start=-1;
                      sum=0;
                  }
                  else if(sum==maxsum&&countstore<countt)
                  {
                      startstore=start;
                      countstore=countt;
                      countt=0;
                      start=-1;
                      sum=0;
                  }
        }
        if(start==-1)
        {
            cout<<endl;
        }
        else
        {
            for(i=startstore;i<startstore+countstore;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}


