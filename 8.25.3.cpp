#include<bits/stdc++.h>
using namespace std;

bool ispowerof2(long long int x)
{
     return x && (!(x&(x-1)));
}
void dotraversal(int a, vector <int> &one, vector <int>* vt,int* visited)
{
    // no need to make the bool visited accordingly for it
    int i;
    for(i=0;i<vt[a].size();i++)
    {
        if(visited[vt[a][i]]==0)
        {
            visited[vt[a][i]]=1;
        one.push_back(vt[a][i]);
        dotraversal(vt[a][i],one,vt,visited);
        }
    }
}
int main()
{
    int test,a,b,c,d,e,i,j,k,l,n,m,q,index,some;
    long long int countt;
    cin>>n;
    int arr[n+1];
    vector <int> vt[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    m=n-1;
    // m denotes the number of edges accordingly for it
    // lets first of all consider the general tree accordingly for it
    while(m--)
    {
        cin>>a>>b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    cin>>q;
    while(q--)
    {
        cin>>a>>b;

        vector<int> one;
        vector<int> two;
        one.push_back(a);
        two.push_back(b);
        int visited1[n+1]={0};
        int visited2[n+1]={0};
        dotraversal(a,one,vt,visited1);
        dotraversal(b,two,vt,visited2);
        //cout<<"size fo one is"<<one.size()<<endl;
       // cout<<"size of two is "<<two.size()<<endl;
        //now after that
        countt=0;
        for(i=0;i<one.size();i++)
        {
            for(j=0;j<two.size();j++)
            {
                cout<<"ss  "<< arr[one[i]]<<"     "<<arr[two[j]]<<endl;
                if(ispowerof2(arr[one[i]]^arr[two[j]]))
                    countt++;
                cout<<"correspinding ocuntt is "<<countt<<endl;
            }
        }
        cout<<countt<<endl;


    }
}

