int findfloor(int* arr,int start, int endd,int x)
{
    // we need to return themaximum value of the solution aaccordingly for it
    //cout<<"start is "<<start<<" end is "<<endd<<endl;
    int ans=-1;
    if(start>=endd)
    {
      return  ans;
    }
    int mid =start+(endd-start)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x)
    {
        // search in the right half but
        // keep on considering the particular things as well
        return max(mid,findfloor(arr,mid+1,endd,x));

    }
    else
    {
        return findfloor(arr,start,mid-1,x);
    }
}
