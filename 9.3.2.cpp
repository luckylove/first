#include<bits/stdc++.h>
using namespace std;
// minimum number of comparison we want to do inside the matrix accordingly for me and to all

// one set is given and number of elements is too given to me so how can we solve it
// accordingly for it basically what to say next regarding these approaches accordingly
// for me and to all
// longest common sequecne accoringly for it
// either same or not
// palindromic partision of the string accordingly fo rme and to all basically what to sya next abotu all these situatonf
// matrix chain mutiplication problem accordingly
// variation palindromic partition accordingly for it to me and to all basically what to say next
// regarding all these approaches accordingly for me and to all
// if same then ++on both of them
// if not then ++ in one of them and ++ in other of them and get the maximum of both of them
// these all the basically the variations of the longest increasing subsequence accordingly for me and to all
// all these are basically the variations for it to  me and to all what to say next about all these approaches
// accordingly for me and to all what to say next about all these
// can be greater and can be equal to the increasing sequence accordingly for me and to all
// to which the nother x coordinate will be connected accordingly for me and to all
// basically what to say next regarding all these approaches accordingly for me and to all
// so these are the approaches that we can use accordingly for it
// basically what to say next regarding all these approachesa to me and to all
// then their comes space optimized version of the subset sum problem accordingly for me and to all basically
// what to say next about these space optimized accordingly for me and to all
// bridge problem of dynamic programming accordingly for me adn toa l
// what to say next about all these things to me and to all basically what to say next about all these situations
// for me and to all what to say next abnou all these situationsf or all ans to me and toa ll
// bridge problem too is the problem of the longest increasing subsequence accordingly for it
// longest increasing subsequence accordingly for it to me and to all what to say next aregaringa
// basically all these approahes accordingly for it to me and toa ll what to say next about these things accordingly
// for it to all what to say next about these things to me and to all
int longestincreasing(int * arr,int n)
{
    int dp[n];
    int i,j;
    for(i=0;i<n;i++)
    dp[i]=1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>=arr[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int len=0;
    for(i=0;i<n;i++)
    {
        len=max(len,dp[i]);
    }
    return len;
}
bool dosomething(int* arr,int n,int i,int sum)
{
    if(i>=n&&sum>0)
    {
        return false;
    }
    if(sum==0)
    {
        return true;
    }
    if(sum<0)
    {
        return false;
    }
    return dosomething(arr,n,i+1,sum)||dosomething(arr,n,i+1,sum-arr[i]);
}
// now how to do the recursive implementation of this algo

bool something(int* arr,int n,int sum)
{
    /*
    bool dp[n+1][sum+1];
    // if n is  equals to zero then nothing is possible
    int i,j;
    for(i=0;i<=sum;i++)
    {
        dp[0][i]=false;
    }
    for(i=1;i<=n;i++)
    {
        dp[i][0]=true;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(j<arr[i-1])
            {
                // ignore this particular element
                dp[i][j]=dp[i-1][j];
            }
            else
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
        }
    }
    return dp[i][j];
    */

     bool subset[2][sum + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {

            // A subset with sum 0 is always possible
            if (j == 0)
                subset[i % 2][j] = true;

            // If there exists no element no sum
            // is possible
            else if (i == 0)
                subset[i % 2][j] = false;
            else if (arr[i - 1] <= j)
                subset[i % 2][j] = subset[(i + 1) % 2]
             [j - arr[i - 1]] || subset[(i + 1) % 2][j];
            else
                subset[i % 2][j] = subset[(i + 1) % 2][j];
        }
    }

    return subset[n % 2][sum];

}
// that will basically considers here the building the bridges wala concept accordingly for me and to all
// basically what to say next about all these situations for all ans to me and to all what to say next
// about all these approaches accordingly for me and to all

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
        int sum;
        sum=accumulate(arr,arr+n,0);
        if(sum&1==1)
        {
            // means odd then
            cout<<"NO"<<endl;
        }
        else
        {
            sum=sum/2;

        if(something(arr,n,sum))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}
