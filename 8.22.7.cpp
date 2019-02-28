#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,m,x,i,k;
    scanf("%d",&test);
    // the value of n is ver less accordingly for it

    while(test--)
    {
        scanf("%d",&n);
        string arr="19";
        string brr;
        char temp;
        int countt;
        if(n==1)
        {
            cout<<arr<<endl;
        }
        else
        {
            n--;
            while(n--)
            {
                brr=arr;
                //cout<<"brr is "<<brr<<endl;
                arr="";
               // cout<<"arr is "<<arr<<endl;
                countt=0;
                x=brr.size();
                i=0;
                countt=1;
                while(i<x-1)
                {


                    if(brr[i]==brr[i+1])
                    {
                        countt++;
                        i++;
                    }
                    else
                    {
                        //cout<<"brr[i] os "<<brr[i]<<endl;
                       // cout<<"count i s"<<countt<<endl;
                        //cout<<"tocharcoutnt is "<<tochar(countt)<<endl;

                        arr.append(to_string(countt));
                        arr.push_back(brr[i]);
                        countt=1;
                        i++;
                    }
                    //cout<<"arr here is sis sis  "<<arr<<endl;
                }
                arr.push_back(brr[x-2]);
                arr.push_back(brr[x-1]);

                //cout<<arr<<endl;


            }
            cout<<arr<<endl;
        }
    }
}
