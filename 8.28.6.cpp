


int getmid(int a,int b)
{
    return a+(b-a)/2;
}
int constructtree(int* arr,int* st,int start,int endd,int i)
{
    if(start==endd)
    {
        st[i]=arr[start];
        return st[i];
    }
    int mid=getmid(start,endd);
    st[i]=min(constructtree(arr,st,start,mid,2*i+1),constructtree(arr,st,mid+1,endd,2*i+2));
    return st[i];
}
int *constructST(int arr[],int n)
{
    int countt=(int)ceil(log2(n));
    int m= 2*(int)pow(2,countt)-1;
    int* st=new int[m];
     constructtree(arr,st,0,n-1,0);
     return st;

}
/* The functions returns the
 min element in the range
 from a and b */
 int findmin(int* st,int start,int endd,int l,int r,int i)
 {
     // if lies completely inside the range then return
     if(start>=l&&endd<=r)
     {
         return st[i];
     }
     if(endd<l||start>r)
     {
         // return some maximum value
         return 100000;
     }
     int mid=getmid(start,endd);
     return min(findmin(st,start,mid,l,r,i*2+1),findmin(st,mid+1,endd,l,r,2*i+2));
 }
int RMQ(int st[] , int n, int a, int b)
{
   // range minimum queries
   return findmin(st,0,n-1,a,b,0);
}
