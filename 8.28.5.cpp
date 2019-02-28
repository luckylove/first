// sum of the maximum and the minimum element of all the subarrays of size k



#include<bits/stdc++.h>
using namespace std;
int returnmid(int a,int b)
{
    // considering a is less than b
    return a+(b-a)/2;

}
// first of all we need to construct the tree and for this we
// need to allocate the memory accordingly for this
int constructtree(int* arr,int * st,int start,int endd,int i)
{
    //cout<<"ss"<<endl;
    //cout<<"i si "<<i<<endl;
    if(start==endd)
    {
        st[i]=arr[start];
        return arr[start];
    }
    // we need to find out the mid
    int mid=returnmid(start,endd);
   // cout<<"mid is "<<mid<<endl;
    st[i]=min(constructtree(arr,st,start,mid,2*i+1),constructtree(arr,st,mid+1,endd,2*i+2));
    return st[i];
}
int* construct(int* arr,int n)
{
    int x=(int)ceil(log2(n));
    int m=2*(int)pow(2,x)-1;
    // total number of nodes in the segment tree is m
    //cout<<"ss"<<endl;
    int* st=new int[m];
    //cout<<"tt"<<endl;
    constructtree(arr,st,0,n-1,0);
    // last element is the si;
    return st;

}
// construction of the tree remains the same in all the cases accordingly for it

// we need to return the queries accordingly for it
// without update and one is with update accordingly
void update(int* arr,int* st,int start,int endd, int index,int value,int i)
{
    // check for the invalid input
    // after that
    if(start==endd)
    {
        st[i]=value;
        arr[index]=value;

    }
    else
    {
        int mid=returnmid(start,endd);
        // now we need to find where the index will lies int he
        // range accordigly for it
        if(index>=start&&index<mid)
            update(arr,st,start,mid,index,value,2*i+1);
        else
            update(arr,st,mid+1,endd,index,value,2*i+2);

        st[i]=min(st[2*i+1],st[2*i+2]);
        //st[i]=max(update(arr,st,start,mid-1,index,value,2*i+1),update(arr,st,mid,endd,index,value,2*i+2);

    }
    return;

}
int getmax(int* st,int start,int endd,int l,int r,int i)
{
    // if lies completely inside the range
    if(start>=l&&r>=endd)
    {
        return st[i];
    }
    if(endd<l||start>r)
    {
        return 100000000;
    }
    int mid=returnmid(start,endd);
    return min(getmax(st,start,mid,l,r,2*i+1),getmax(st,mid+1,endd,l,r,2*i+2));
}
int main()
{
   int a,c,i,j,k,l,n,m,r,q,index,value,pos;
   char b;
   cin>>n>>q;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int * st=construct(arr,n);

   // try to print out the constructed segment tree

   for(i=0;i<2*n-1;i++)
   {
       cout<<st[i]<<" ";
   }
   cout<<endl;
   cout<<"now enter the queries"<<endl;

    while(q--)
    {
        cin>>b;
        if(b=='u')
        {
            cin>>pos;
            cin>>value;
            pos--;
             update(arr,st,0,n-1,pos,value,0);
              //update(segment,n,pos,value);

        }
        else
        {
            cin>>l;
            cin>>r;
            l--;
            r--;
            cout<<getmax(st,0,n-1,l,r,0)<<endl;
            //cout<<findmin(segment,n,l,r)<<endl;
        }
    }
    /*
   while(q--)
   {
       cin>>a;
       if(a==1)
       {
           cin>>index;
           cin>>value;
          // index--;
           cout<<"something"<<endl;
           update(arr,st,0,n-1,index,value,0);

       }
       else
       {
           cin>>l>>r;
           //l--;
           //r--;
           cout<<getmax(st,0,n-1,l,r,0)<<endl;
       }
       */
   }


