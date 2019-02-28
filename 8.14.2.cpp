#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
   int main() {
     long long int test,i,j,k,n,m,a,b,c,countt,temp,store,sum,p,s,x;
      cin>>n>>x;
      int arr[n];
      for(i=0;i<n;i++)
      {
          cin>>arr[i];
      }
    countt=0;
    for (i = 0; i < n - 2; i++)
        for (j = i + 1; j < n - 1; j++)
            for ( k = j + 1; k < n; k++)
                if (arr[i] * arr[j] * arr[k] == x)
                {
                    cout<<"arr[i] is"<<arr[i]<<"arr[j] is "<<arr[j]<<" arr[k] is "<<arr[k]<<endl;
                    countt++;

                }
                    //countt++;

    cout<<countt<<endl;
}
