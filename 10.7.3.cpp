#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,a,b,c,d,i,j,k,n,m,h,w;
    cin>>test;
    while(test--)
    {
        cin>>h>>w;
       long long int area=4;
       long long int sum=h*w;
      a=h%4;
      // either a==2
      // or a==0 we need to work on
      //cout<<"sum is "<<sum<<endl;
      if(a==0)
      {
          // now we need to work on width
          if(w%2==0)
          {
             // cout<<"one"<<endl;
             // cout<<"(w/2)*(h/4)"<<(w/2)*(h/4)<<endl;
             //  cout<<"((w/2)-1)*(h/4 -1)"<<((w/2)-1)*(h/4 -1)<<endl;
              sum=sum-((w/2)*(h/4)+((w/2)-1)*(h/4 -1))*area;
          }
          else
          {
             // cout<<"two "<<endl;
             //  cout<<"(w/2)*(h/4)"<<(w/2)*(h/4)<<endl;
              // cout<<"((w/2))*(h/4 -1)"<<((w/2))*(h/4 -1)<<endl;
              sum=sum-((w/2)*(h/4)+((w/2))*(h/4 -1))*area;
          }
      }
      else
      {
          if(w%2==0)
          {
            //  cout<<"three"<<endl;
              // cout<<"(w/2)*(h/4)"<<(w/2)*(h/4)<<endl;
              // cout<<"((w/2)-1)*(h/4 )"<<((w/2)-1)*(h/4 -1 )<<endl;
              sum=sum-((w/2)*(h/4)+((w/2)-1)*(h/4 -1))*area;
          }
          else
          {
             // cout<<"four"<<endl;
              // cout<<"(w/2)*(h/4)"<<(w/2)*(h/4)<<endl;
              // cout<<"((w/2))*(h/4 )"<<((w/2))*(h/4 )<<endl;
              sum=sum-((w/2)*(h/4)+((w/2))*(h/4))*area;
          }
      }
       cout<<sum<<endl;
    }
}
