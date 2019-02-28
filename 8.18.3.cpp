#include<bits/stdc++.h>
using namespace std;
// hoffman encoding arranging the element accordingly to the frequency now we
// talk about the decoding accordingly for it
// minimum number of increasing and decreasing to meke array nearly shorted accordingy
// accordingly for it
// basically what to say next about this ok for me and to all what to say next abou this
// things to me and to all
// think about it to all and to me what to say next about this
// snake and ladder problem
// so i am unable to do that particular problem
// snake and the ladder accordingly for it
// what to do next about this ok for me and to all what to say next about this
// ok for me and to all and what to say next about this things to me and to all
// something something
// regarding all these things to me and to all what to sya nex tabotu this ok f
// ok for me and to all
// either it uses the self built priority queue using the min heap accordingly/
// or some another method he is working on

// firstly i need to do these question accordingly without any problem
// sort the array not accordingly to the elments
// but accordingly to their modulus accordingly for it
// it is given the binary search tree
// it is given the binary tree accordingly for it
// i think so use of the priority queue
// then second think is that
// but as far as we are taking about the compititive programming
// the time complexity to do certain things to me and to all what to say next about this
// so this is the situations that i can say here without encountering any problem
// the number are not the single digit number accordingly for it
// in the interview they said to obtimized it accordingly for it
// we need to use the binary search function for all of us to me and to all
// self balancing binary search tree
// red black tree avl tree or splay tree accordingly for it
// i am taking about the priority queue then i reach their
// this is the best approach ofthe question porblem accordingly for it
// the best appraoch is this ok for me and to all
// vector is basically the dynamically allocated array
// so we can easily use the vector accordingly without any problem
// i think so encountering here i think ok for me and toa ll
// self banaln 2 dimentional array se we can do it effieciently for it
// then after that how we can do it then after that how we can do it
// slt then after that their i one more thing is hashing
// self balancing binary search tree we can use to
// store thr element in the binary tree accordingly for all ans to me
// ans to all what to say nex tabout this to me and toa ll
// we can make an array of the first index in case of the pari
// accoridngly for it
// shorteing accoridngly ot he hash is one of the way to solve to question accoridngly fo tit
// sort the element according to the frequencty
// use of the 2 dimentional array
// sort accoridngly tot he first nd accordingly tot he seonc
// first accoridngly sort
// three elmemne one
// elment stores the starting
// index of the element accordingly for it
// basically what to do next about this to me and to all
// sorting the elements by their frequency accordingly for it
// how to solve this problem here encountering here for all ans to me and to all
// so this is the siutaito
// cleaning and shavind is not the bad idea accordingly for it
// basically what to say next about this ok for me and to all
// basically what to say next about this
// sorting an array according to the another array
// and how we can do these type of sorting accordingly for it
// depending on the things that we can do here are basically very important accordingly for it

// use of the sorting and the modified binary search functions to do certain things
// here accordingly for it
// we must make the temporary array
// modified binary search funciton is used to find the index of
// the first occourance of the element accordingly for it
// then we can print that element and makr the visited as true as
// we have visited that element
// number of element in the a2 can also be greater than that of a1 accordingly to ti
// binary search hashing tree or something link that we can use or we have to use
// here without any problem encountering here for all ans to me and to all
// but i can read it once so that i get a little bit familiar about this
// concept of getting the execution time of your program accordingly for it
// why the priority queue is used most here
// this is because priority queue uses the greedy approach accordingly for it
// without any  problem encountering here for all ans to me and to all
// because they uses the greedy approach so we can easily use it without any
// problem encountering here without any problem arrising here for all ans to me
// ans to all what to say next about these things to me and to all
// kth largest element after ever insertion i need to tell

// by using certain funciton to note the time we can do this whitout any problem
// encountering here for all ans to me and toa ll what to say next about thsi

// if i want to take the priority queue then
// whether it is the min or max we mush need to specify the
// order in which we want to arrange the element of the sturcture

// concept of the priority queue is basically very interersting
// what to say next about this ok for me and to all what to say next about this \
// this is the situations that i can say here without encountering any problem her e
// what are the things that we can do by using the priority queue and that too
// most effiecently for it
// basically what to say next about this to me and to all
// applying the brute formce
// and make certain conditions for this particular cases
// accordingly for it what to say next about this ok for me and to all
// whenever use the priority queue chutiya katna start
// self defined compare operation in the priority queue
// as far as we are talking about the halfmand coding problem
// accordingly for it what to say next about this ok for me and to all
// what to say next about this situations for all ans to me and to all
// what to say next about this to me and to all
// we can create the disjoint set data struture and that too by using the path compression
// accoridnlgy for it what to say next about this to me adn to all basically what to say next about this
// because i know everything about it before i am now just using it
// i know all the syntex of it earlier accordingly for it
// what to say next about this ok for me and to all
struct node
{
    char ch;
    int freq;
    struct node* left;
    struct node* right;
};
struct compare
{
    bool operator()(struct node* a,struct node* b)
    {
        return a->freq > b->freq;
    }
};

struct node* newnode(char c,int f)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->ch=c;
    newnode->freq=f;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}
void dotraversal(struct node* root,int* crr,int index)
{
    if(root->left==NULL&&root->right==NULL)
    {
        for(int i=0;i<index;i++)
        {
            cout<<crr[i];
        }
        cout<<" ";
    }
    if(root->left!=NULL)
    {
        crr[index]=0;
        dotraversal(root->left,crr,index+1);
    }
    if(root->right!=NULL)
    {
        crr[index]=1;
        dotraversal(root->right,crr,index+1);
    }


}
int main()
{
    int test,a,b,c,d,i,j,k,n,m;
    char arr[27];
    cin>>test;
    while(test--)
    {
        cin>>arr;
        n=strlen(arr);
        int indexofelement[28]={0};
        for(i=0;i<n;i++)
        {
            indexofelement[arr[i]-'a']=i;
        }
        int brr[n];
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
        }

        //lets take the priority queue
        struct node*  one;
        struct node*  two;
        int freq1;
        int freq2;
        priority_queue< struct node* , vector< struct node* >, compare > pq;
        for(i=0;i<n;i++)
        {
            pq.push(newnode(arr[i],brr[i]));
        }
        while(!pq.empty())
        {
            one=pq.top();
            pq.pop();
            if(!pq.empty())
            {
                two = pq.top();
                pq.pop();
                // now we need to do certain things here for all
                // ans to me and to al
                freq1=one->freq;
                freq2=two->freq;
                struct node* newnode1=newnode('#',freq1+freq2);
                /*
                if(freq1==freq2)
                {
                    // then we need to check which element comes firstly
                    // in the inpul array accordingly for it
                    if((one.second)->ch!='#'&&(two.second)->ch=='#')
                    {
                         newnode1->left=two.second;
                         newnode1->right=one.second;
                    }
                    else if(indexofelement[(two.second)->ch]<indexofelement[(one.second)->ch])
                    {
                          newnode1->left=two.second;
                         newnode1->right=one.second;
                    }
                    else
                    {
                         newnode1->left=one.second;
                         newnode1->right=two.second;
                    }
                }
                */
                //else
               // {
                    newnode1->left=one;
                    newnode1->right=two;
                //}

                pq.push(newnode1);

            }
            else
            {
                break;
            }

        }
      //  cout<<one.first<<endl;
        int crr[100];
        int index=0;
        // now one.second is the root node
        dotraversal(one,crr,index);
        cout<<endl;

    }
}











