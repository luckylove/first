#include<bits/stdc++.h>
// means if we are talking about  the tree then
// after that we talks about the recursive implementation of the tree accordingly
// for it what to say next about this
using namespace std;

struct some
{
    int a,b;
};
bool owncompare(struct some x,struct some y)
{
    return x.a<y.a;
}
int main()
{

    int test,a,b,c,d,i,j,k,l,m,n;

    // when we are working with the vector then at that time
    // we can either use the iterator or
    // in place of declaration
    // we can use the auto keyword to represent something something
    // accordingly for it
    vector <int> v;
    vector <int> :: iterator it;
    // means we are talking about the vectors
    for(i=0;i<10;i++)
    {
        v.push_back(i*10);

    }
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"  ";
    }
    cout<<endl<<endl;
    for(i=0;i<10;i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
   // set<int> st;
   // cout<<st.max_size()<<endl;
   // now we can work accordingly without any problem
   /*
    map < string, int > mapp;
    mapp.insert(pair< string ,int>("shubham",1));
     map < string, int > ::iterator itr;
    if(mapp.find("shubham")!=mapp.end())
    {
        itr=mapp.find("shubham");
        cout<<itr->second<<endl;
    }
        //cout<<"element is found in the mapp"<<endl;
    else
        cout<<" it means the element is not found in the mapp accordingly"<<endl;
      */
    cin>>test;
    while(test--)
    {

        cin>>n;
        struct some something[n];
        for(i=0;i<n;i++)
        {

            cin>>something[i].a;
            cin>>something[i].b;
        }

        for(i=0;i<n;i++)
        {

            cout<< something[i].a<< "  ";

        }
        cout<<endl;
        for(i=0;i<n;i++)
        {

            cout<< something[i].b<< "  ";

        }
        sort(something,something+n,owncompare);

        for(i=0;i<n;i++)
        {

            cout<< something[i].a<< "  ";

        }
        cout<<endl;
        for(i=0;i<n;i++)
        {

            cout<< something[i].b<< "  ";

        }
    }
}
