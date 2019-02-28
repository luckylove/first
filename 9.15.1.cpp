#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a;
    int b;

};
 bool compare(struct node& one,struct node& two)
{
    if(one.a==two.a)
    {
        return one.b<two.b;
    }
    return one.a<two.a;
}
int main()
{
    int i,j,m,n;
    n=5;
    struct node arr[5];
    for(i=0;i<n;i++)
    {
        cin>>arr[i].a;
        cin>>arr[i].b;
    }
   sort(arr,arr+5,compare);
   for(i=0;i<n;i++)
    {
        cout<<arr[i].a<<"    ";
        cout<<arr[i].b;
        cout<<endl;
    }
}
