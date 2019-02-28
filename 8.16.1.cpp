#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <pair<int ,int > > vt[v];



    set< pair<int, int> > st;
    pair <int ,int> temp;
    set< pair<int, int> > :: iterator it;
    for(int i=0;i<10;i++)
    {
        st.insert(make_pair(10,i));
    }
    // means each and every pair is unique accordingly for it
    for(it=st.begin();it!=st.end();it++)
    {
        cout<<(*it).first<<"   "<<(*it).second<<endl;
    }
    // we can insert the pari without any problem encountering here ok for me
    // ans to all
    // so i think so that their is not problem int he code written above accordingly for it
    // what to say soemthing something regardin all these things to me and to alll
    cout<<st.size();
    // shortest path algo by using the priority queue in the stl
    // accordingly for it
}

