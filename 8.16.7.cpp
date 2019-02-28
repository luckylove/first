#include <bits/stdc++.h>
using namespace std;


int main()
{
    int test,a,b,i,j,k,n,m,c,countt,temp,store,sum;

	cin>>test;
	char arr[1005];
	while(test--)
	{
	    cin>>arr;
	    // we need to find out the repetiton of the substring
	    char store[1000];
	    j=0;
	    for(i=1;i<n;i++)
	    {
	        // finding out the first character reappear
	        if(arr[i]==arr[0])
	        {
	            store[j]=i;
	            j++;
	        }
	    }
	    // now we need to examine the store
	    if(j==0)
	    {
	        cout<<"False"<<endl;
	    }
	    else
	    {

	    }
	}
}
