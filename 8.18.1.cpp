#include <bits/stdc++.h>
using namespace std;
// i am always ready to do the questions of the string
// accordingly for it
// basically what to say next about this ok for me and to all what to say
// next about these things to all of us
// sum of all the OR's we can calculate without any problem encountering here for all
// ans to me and to all what to say next about this to me and t all
// a little bit regarding the dp its's solution is
// accordingly for it
// basically what to do next about this ok for me and to all what to say next about this
// accordingly for all of us
// what to say next about this to me and to all
// today either i need to start with the segment tree
// or with something in graph as well ok for me and to all
// we can say lexiographical smallest array we can make or we can too easily make the
// lexiographical largest array accordingly for it
// basically what to say next about this to me and to all what to say next in thsi
// situations for all ans to me and to all
// we need to find out the xor of all the elements accordingly for it
// each and every subset ka exor find out karna hai
// without any problem encountering here for all ans to me and to all
// what to say next about this to me and to all
// we have applied the brute force but that too in the organized manner
// if > k comes into picture then at that time just break it
// till that point we findout the maximum element accordingly for it
// so this is the situations that i can say here without any problem
// encountering here for all ans to me and to all what to say next about this
// basically to me and to all
// in an organized manner accordingly for it
// what to say next about this to me and to all
// largest lexiographical array with atmost k consequtive swaps accordingly for t
// i need to find out without any problem encountering here for all ans to me and
// to all
// atmost k swapw we can do without any problem encountering here for all ans to
// me and to all
// segment tree
// avl or something like that red black tree or something more like
// these things to me and to all
// basically what to say next about this to me and to all what to say next about this
// to me and to all
// so what next we can say here for all ans to me and to all what to say next about thsi
// so this is the situations for all ans to me and to all what to say next about this
// to me and to all ok for all of us to me and to all
// efficient approach aati hai that a little bit uses the greedy approach accordingly for ti
// means their are certain things that we can use or say something something
// without any problem encountering here for me and toa ll what to say next about this
// so this is the situations that i can say here without any problem encountering here
// for me and to all what to say next about this to me and to all
// shorting array by just reversing at the middle
// but we only need to check whther is it possible or not
// no need to do the changes here accordingly for it
// only needs to check something something accoridnlgy for it
// what other is written and what you have written accordingly for it
// basically what to say next about this to me and to all
// or we can say what to say next about all these situations for me and to all
// whenever we are taking about such situation
// we can go through the priority queue
// accordingly for it
// basically what to say next about this ok for me and to all
// so this is the solution for it to me and to all what to say next about this
// so these are the situations which we get here without any problem accordingly for it
// these are basically those questions which we can approach simply without any
// problem encountering here for all ans to me and to all these are the situations
// that we can get here for all ans to me and to all
// choose what is the best at the moment accordingly for it
// this is what the greedy algo say
// choose what is the best as far as taking about the present time
// without thinking about the future accordingly for it
// what to say next about this ok for me and to all
// every time we need to get the minimum element and then after that
// reverse it and then after that again insert it accordinglly for it
// what to say next about this ok for me and to all what to say next about this
// means these are the things which we can get in the situations like that
// ans for me and to all what to say next about this to me and to all
// so these are the situations for all to me and to all of us accordingly to all\
// how to get the things done accordingly for it
// we need to make the haffman tree then after that traverse the tree into the stack
// then after that so certain thing to me and to all // o or 1 accoridngly to it
// what to say next about this ok for me and to all
// the most efficient approah is the seive of erathosthnes
// what is the time complxity of the sqrt(n);
// i think tiehter log(n) or root n accordinlgy for it
// squareroot of n
// hoffman encoding question for all ans to me and to all

// accordingly for it
// square ko bhi store kar liya
// prime square
// prime is also stored then after that
// the prime number is also stored
// because we want to reduce the time complexity fo the also
// trade of between the time and the space accordingly for it
void dosomething(int* arr,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        arr[i]=1;
    }
    for(j=2;j<n;j++)
    {
        if(arr[j]==1)
        {
           for(i=j*2;j*i<n;i+=j)
           {
               arr[i]=0;
           }
        }
    }
    /*
    for(i=1;i<=100;i++)
    {
        cout<<"i is "<<i<<" "<<arr[i]<<endl;
    }
    */
}
int main()
{
    cout<<(int)'\''<<endl;
    int test,i,j,k,l,a,b,c,r,n,m;
    cin>>test;
    int arr[32701];
    dosomething(arr,32701);
    while(test--)
    {
        for(i=1;i<=100;i++)
    {
        cout<<"i is "<<i<<" "<<arr[i]<<endl;
    }
        cin>>l>>r;

    }
}
/*
int main()
{

    cout<<sqrt(5)<<endl;
    // it given us the double result
    if(sqrt(5)-(sqrt(5)/1)==0)
    {
        // perfect square
    }
    else
    {
        cout<<sqrt(5)-((int)sqrt(5)/1)<<endl;
        cout<<"not the perfect square"<<endl;
    }
}
*/

