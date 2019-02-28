// as far as we are talking about the binary search
#include<bits/stdc++.h>
using namespace std;

int mysearch(int* arr,int start,int endd,int x)
{
    if(start<=endd)
    {
        int mid=(endd+start)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            // search in left subtree
            return mysearch(arr,start,mid-1,x);
        }
        else
            return mysearch(arr,mid+1,endd,x);
    }
    return -1;
}
int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }


}
