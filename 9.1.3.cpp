#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,a,b,i;
   cin>>test;
   string arr="Government College of Engineering & Textile Technology Berhampore";
   int n=arr.size();
   string input;
   getchar();
   while(test--)
   {

      getline(cin,input);
      //cout<<n<<endl;
      int temp=0;
      int flag=1;
      int countt=0;
     for(i=0;i<n;i++)
     {
         if(arr[i]==' ')
         {
            temp--;
                         cout<<"temp is "<<temp<<"countt is "<<countt<<endl;

             if(temp<2*countt)
             {
                 flag=0;
                 break;
             }
             countt=0;
             temp=0;
         }
         if(toupper(arr[i])!=toupper(input[i]))
         {
             countt++;
         }

         temp++;


     }
     temp--;
       cout<<"temp is "<<temp<<"countt is "<<countt<<endl;
            if(temp<2*countt)
             {
                 flag=0;
             }
     if(flag==0)
     {
         cout<<"reject"<<endl;
     }
     else
        cout<<"accept"<<endl;
   }
}
