#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,i,j,k,m,n,a,b,c,d,countt;
	cin>>test;
	while(test--)
	{
	    cin>>m>>n;
	    int arr[n];
	    int brr[m];
	    for(i=0;i<m;i++)
	    {
	        cin>>brr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>countt;
	    set<int> st;
	    set<int> :: iterator it;
	    for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++)
            {
                st.insert(arr[i]+brr[j]);

            }
        }

        if(st.size()>=n)
        {

           for(it=st.begin();it!=st.end();++it)
           {
               countt--;
               if(countt==0)
               {
                   cout<<*it<<endl;
               }
           }
        }
        else
        {

            cout<<-1<<endl;
        }


	}
}
