#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    int y;
};
double finddistance(struct node a,struct node b)
{
     return (double)sqrt((double)pow(a.x-b.x,2)+(double)pow(a.y-b.y,2));
}
int main()
{
    struct node temp;
    cin>>temp.x;
    cin>>temp.y;
    struct node some;
    for(int i=0;i<4;i++)
    {
        cin>>some.x;
        cin>>some.y;
        cout<<finddistance(temp,some)<<endl;
    }

}
