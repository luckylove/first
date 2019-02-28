#include <bits/stdc++.h>
using namespace std;








struct subset
{
    int parent;
    int rank;
};
// initally the rank will be set to the zero to all of them
int findsomething(struct subset* some,int n)
{
    if(subset[n].parent!=n)
    {
        subset[n].parent=finsometing(subset,subset[n].parent)
    }
    return subset[n].parent;
}
// to to do the unior operation
void uniontwo(struct subset* some,int a,int b)
{
    int roota=findsomething(subset,a);
    int rootb=findsomething(subset,b);
    if(subset[roota].rank<subset[rootb].rank)
    {
        subset[roota].parent=rootb;
    }
    else if(subset[roota].rank>subset[rootb].rank)
    {
        subset[rootb].parent=roota;
    }
    else
    {
        subset[roota].rank++;
        subset[rootb].parent=roota;
    }
}











int findparent(int index)
{

    while(parent[index]!=-1)
    {
        index=parent[index];
    }
    return index;
}
int findouttherank(int index)
{


}
// this is find parent
dosomething(int a,int b)
{

    int ansa=findparent(a);
    int ansb=findparent(b);
    if(ansa==ansb)
    {

        // both of them have the same parent so discard this edges
        return -1;
    }
    else
    {

        parent[ansa]=ansb;
        return 1;
    }
    // so the edges are icluded accordingly for it
}
// the solution of this problem is just the greedy algo accoridnlgy for it
int main()
{

	int test,a,b,i,j,k,n,m,c,countt,store,sum;
	double temp;
	cin>>test;
	while(test--)
	{
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());

       temp=(double)arr[0];
       for(i=1;i<n;i++)
       {

           temp=((double)arr[i]+temp)/2;
           //cout<<"temp is "<<temp<<endl;
       }
       cout<<std::fixed<<temp<<endl;
	}
}
