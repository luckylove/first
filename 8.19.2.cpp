// something something regarding the binary search tree accordingly for it
// root->right ka left most part
// root->left ka right most part i have deleted accordingly here for all ans to me and to all
// so this is the required situations for all and to ame and to all
// basically what to say next aboout this to me and to all
// in the self balancing binary search tree
// the time complexity is basically
// without any problem i can construct the tree

// time complexity is basically the
// what is the time complexity is longn
// advantages of bst over the hash table
// retriver is easy
// nlogn require karegge logn
// this is only possible because we have solve a lot of question of the tree accordingly for it
// basically what to do next about this ok for me and to all
// from the binary tree accordingly for it
// what to say next about this things to me and to all what to say next
// binary search tree accordingly for it
// insertion in the binary search tree
// deletion in the binary search tree
// accordingly for it this is the situation which i am stuck in accordingly for it
// then only i can move towards the avl tree or red black tree accordinlgy for it
// basically what to say next about this to me and to all what are the some
// of the things that i can say here
// the important part is how to approach the quesiton
// we don't want to move on the snake adn ladder problem
// now move to certain new things of greedy
// initial countt is zero but as we are moving to the next higher element
// its initial countt must be definitely be one
// because it can reach their after defeting all the one more small than
// this element accordingly for it so this is the case

// when the countt is initiallize to zero instead of one or something like that accordingly for ti
// besically what to say nex tabout this to me and to all
void dosomething(string arr[],struct MinHeapNode* root,string str)
{
    // if leaf node is encounterd then store it accordingly for it
    if(root==NULL)
    {
        return;
    }

    if(root->left==NULL&&root->right==NULL)
    {
        // then we need to store something
        arr[(root->data)-'a']=str;
        return;
    }

    if(root->left!=NULL)
    {
     dosomething(arr,root->left,str+"0");
    }

    if(root->right!=NULL)
    {
        dosomething(arr,root->right,str+"1");
    }
}
string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
{
    // do the inorder traversal of the tree then store the string
    string arr[26];
    // equal to the numbero farraies accordingly to ti
    string str="";
    dosomething(arr,root,str);
    // finding all the string accordingly for it





}
