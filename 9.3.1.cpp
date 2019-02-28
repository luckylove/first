
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

vector<string> printPath(int m[MAX][MAX], int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

	int m[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}

	vector<string> res = printPath(m,n);
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	cout<<endl;
}
	return 0;
}

struct node
{
    int x;
    int y;
    string stt;
};




void something(int m[MAX][MAX],int n,vector <string> &vtr,int x,int y,string result,struct node* arr)
{
    if(x>=n||x<0||y>=n||y<0||m[x][y]==0)
    {
       // cout<<"something"<<endl;
        return;
    }
    if(x==n-1&&y==n-1)
    {
        // we get the one set
       // cout<<"result"<<result<<endl;
        vtr.push_back(result);
        return;
    }

    for(int i=0;i<4;i++)
    {
         m[x][y]=0;
     something(m,n,vtr,x+arr[i].x,y+arr[i].y,result+arr[i].stt,arr);
         m[x][y]=1;
    }

}
void dosomething(int m[MAX][MAX],int n,vector <string> &vtr,struct node* arr)
{
    // helper function
    //cout<<"help"<<endl;
    return something(m,n,vtr,0,0,"",arr);

}
vector<string> printPath(int m[MAX][MAX], int n)
{
    struct node arr[4];
arr[0].x=1;
    arr[0].y=0;
    arr[0].stt="D";

     arr[1].x=0;
    arr[1].y=1;
    arr[1].stt="R";

     arr[2].x=-1;
    arr[2].y=0;
    arr[2].stt="U";

     arr[3].x=0;
    arr[3].y=-1;
    arr[3].stt="L";
    vector <string> result;

    dosomething(m,n,result,arr);
    sort(result.begin(),result.end());
    return result;


}
