#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int dosomething(int n)
{
  int ans=0;
  int r;
  while(n!=0)
  {
    r=n%10;
    ans+=r*r;
    n=n/10;
  }
  return ans;
}
bool isgay(int n)
{
  // we can make the array
  set<int> st;

  while(n!=1&&st.find(n)==st.end())
  {
     // cout<<"n is "<<n<<endl;
    st.insert(n);
     n=dosomething(n);
     //cout<<n<<endl;
  }

  if(n==1)
    return true;
  else
    return false;

}
int main() {

	int test,a,b,c,d,i,j,k,n,m;
  cin>>test;
  while(test--)
  {
    cin>>n;
    if(checkprime(n)==false)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      if(isgay(n)==true)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
    }

  }
}
