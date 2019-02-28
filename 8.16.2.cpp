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
void findminpath(vector<int> *dist,vector < pair <int ,int > > *vt ,int n, int src)
{
    // now first of all we need to implement the priority queue
    priority_queue< pair<int ,int >, vector < pair<int ,int > >,greater< pair< int ,int > > > pq;
    pq.push(make_pair(0,src));
    vector< pair <int ,int  > > :: iterator it;
    while(!pq.empty())
    {
        pair< int ,int > temp=pq.top();
        int q=temp.first;
        int u=temp.second;
        pq.pop();
        // i need to take an iterator thenuse it
        // we need to update the distance then after
        // insert it into the priority queue

        for(it=vt[u].begin();it!=vt[u].end();it++)
        {
            int start=(*it).first;
            int weight=(*it).second;
            cout<<dist[start]<<endl;
            if(dist[start] > (dist[u]+weight))
            {
                dist[start]=dist[u]+ weight;
                pq.push(make_pair(dist[start],start));
            }

        }

    }
}
int main()
{
    int m,n,i,j,k,a,b,w;
    cin>>m>>n;
    vector< pair<int ,int > > vt[n+1];
    vector <int > dist(n+1,10000000);

    while(m--)
    {
        cin>>a>>b>>w;
        vt[a].push_back(make_pair(b,w));
      //  addedge(vt,a,b,w);

    }
    dist[1]=0;
    // at the end we need to print the dist vector accodingly for ti
    findminpath(dist,vt,n,1);
}
