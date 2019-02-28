// weighted graph is given to me
#include<bits/stdc++.h>
using namespace std;
/*
void addedge( vector < pair < int ,int > >* vt,int a,int b,int w)
{
    vt[a].push_back(make_pair(b,w));
}
*/
// we can add the edge
long long int  findminpath(vector < pair <int ,int > > *vt ,int n, int src)
{
    // now first of all we need to implement the priority queue

    priority_queue< pair<int ,int >, vector < pair<int ,int > >,greater< pair< int ,int > > > pq;
    pq.push(make_pair(0,src));

    vector<int> dist(n, 100000000);
    vector<int> parent(n,-1);
    vector<bool> inMST(n, false);
    dist[src]=0;
    vector< pair <int ,int  > > :: iterator it;
    long long int sum=0;
    while(!pq.empty())
    {
        pair< int ,int > temp=pq.top();
        int q=temp.first;
        int u=temp.second;
        pq.pop();
        // i need to take an iterator thenuse it
        // we need to update the distance then after
        // insert it into the priority queue
        if(inMST[u]==true)
        {
            continue;
        }
        sum+=q;

        inMST[u] = true;
        for(it=vt[u].begin();it!=vt[u].end();it++)
        {
            int start=(*it).first;
            int weight=(*it).second;


           // cout<<dist[start]<<endl;
            //if (inMST[start] == false && dist[start] > weight)
           // {

               // dist[start] = weight;
              // if(marked[y] == false)
               // Q.push(adj[x][me]);
                if(inMST[start]==false)
                pq.push(make_pair(weight, start));
               // parent[start] = u;
           // }
            /*
            if(dist[start] > (dist[u]+weight))
            {
                dist[start]=dist[u]+ weight;
                pq.push(make_pair(dist[start],start));
            }
           */

        }

    }
    // now we have a parent array reprentation of the mst
    // we need to print the array in some fashiion
    return sum;

}
int main()
{
    int m,n,i,j,k,a,b,w;
    cin>>n>>m;
    vector< pair<int ,int > > vt[n+1];

    while(m--)
    {
        cin>>a>>b>>w;
        a--;
        b--;
        vt[a].push_back(make_pair(b,w));
        vt[b].push_back(make_pair(a,w));


    }
    // we need to find out the minimum spanning tree
    cout<<findminpath(vt,n,0)<<endl;
}

