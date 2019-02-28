#include <bits/stdc++.h>
using namespace std;
int main()
{
    // do the reverse traversal of the binary tree
    *sum we can maintain

    // last time i am taking about the bst
    // binary search tree accordingly for it

    // on some of the irrelevant things accordingly for it
    // we can say this is the required situations for all ans to me and to all
    // basically what to say next about this ok for me and to all what to say nex about
    // all these situations for all ans to me and to all
    // if i want to move form the array to the bst
    // then how we can make the bst form the array accordingly for it
    // how to minimize it accordingly for it
    // construction of the bst form the preorder traversal accordingly for it
    // basically what to do next about this to me and to all
    int test,a,b,i,j,k,n,m,c,x,y,store,minn;
    cin>>test;
    while(test--)
    {
        cin>>n;
        // countt the number of 3 already their in the something something
        int arr[20];
        j=0;
        while(n!=0)
        {
            arr[j]=n%10;
            n=n/10;
            j++;
        }




        int countt=0;
        for(i=j-1;i>=0;i--)
        {
            if(arr[i]==3)
            {
                countt++;
            }
        }
        //cout<<countt<<endl;
       if(countt>=3)
       {

       }
       else if(countt<3)
       {
           for(i=0;i<j&&countt<3;i++)
           {
               if(arr[i]!=3)
               {
                   arr[i]=3;
                   countt++;
               }
           }
       }
       for(i=j-1;i>=0;i--)
       {
           cout<<arr[i];
       }

       cout<<endl;

    }
}
