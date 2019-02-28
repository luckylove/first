#include <bits/stdc++.h>
using namespace std;
struct somenode
{
    int someint;
    char somechar;
    bool compare()
};
int main()
{
    int test,a,b,i,j,k,n,m,c,countt,temp,store,sum;
	cin>>test;
	char arr[700];
	while(test--)
    {
        cin>>arr;
        int brr[26]={0};
        n=strlen(arr);
        for(i=0;i<n;i++)
        {
            brr[arr[i]-'a']++;
        }

        priority_queue<pair< int, char > > pq;
        for(i=0;i<26;i++)
        {
            pq.push(make_pair(brr[i],(char)(i+'a')));
        }
    }
}
