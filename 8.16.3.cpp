// weighted graph is given to me
#include<bits/stdc++.h>
using namespace std;
// i am too stuck in the problem here regarding this algo in the heakerearth
/*
void addedge( vector < pair < int ,int > >* vt,int a,int b,int w)
{
    vt[a].push_back(make_pair(b,w));
    vt[b].push_back(make_pair(a,w));
}
*/
// we can add the edge
void findminpath(vector < pair <int ,int > > *vt ,int n, int src)
{
    // now first of all we need to implement the priority queue
   // priority_queue< pair<int ,int >, vector < pair<int ,int > >, greater< pair< int ,int > >  > pq;
   // pq.push(make_pair(0,src));
    multiset< pair< int,int > > pq;
    pq.insert(make_pair(0,1));
    vector< pair <int ,int  > > :: iterator it;
    dist[n+1];
    for(i=0;i<n+1;i++)
    {
        dist[i]=10000000;
    }
    dist[src]=0;
    int visited[n+1]={0};
    while(!pq.empty())
    {
        pair< int ,int > temp=*pq.begin();
        pq.erase(pq.begin());
        //int q=temp.first;
        // u stores the source vertex accordingly for it
        int u=temp.second;
       // pq.pop();
        // i need to take an iterator thenuse it
        // we need to update the distance then after
        // insert it into the priority queue
          if(visited[u])
            continue;
          visited[u]=1;

        for(int i=0;i<vt.size();i++)
        {
            int start=vt[u][i].first;
            int weight=vt[u][i].second;
            //cout<<dist[start]<<endl;
            if(dist[start] > (dist[u]+weight))
            {
                dist[start]=dist[u]+ weight;
                //pq.push(make_pair(dist[start],start));
                  pq.insert(make_pair(dist[start],start));
            }

        }




    }
    for(int i=2;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int m,n,i,j,k,a,b,w;
    cin>>m>>n;
    vector< pair<int ,int > > vt[n+1];
   // vector <int > dist(n+1,10000000);

    while(m--)
    {
        cin>>a>>b>>w;
        vt[a].push_back(make_pair(b,w));
       // addedge(vt,a,b,w);
    }
    //
    // at the end we need to print the dist vector accodingly for ti
   // findminpath(dist,vt,n,1);
   findminpath(vt,n,1);
}
