/******************************************************************************
 
 Online C++ Compiler.
 Code, Compile, Run and Debug C++ program online.
 Write your code in this editor and press "Run" button to compile and execute it.
 
 *******************************************************************************/

#include <iostream>
#include<queue>
#include<stack>
using namespace std;
struct Node{
    Node* left=NULL;
    Node* right=NULL;
    int data;
};
bool bfsLevel(Node* root, int num)
{
    bool ans=false;
    if(root==NULL)
        cout<<" Tree empty !";
    else
    {
        queue < pair<Node*, int>> bfsQueue;
        pair < Node*, int> bfsPair;
        bfsQueue.push( {root,1});
        while( ! bfsQueue.empty())
        {
            bfsPair= bfsQueue.front();
            bfsQueue.pop();
            cout<<bfsPair.first->data<<" "<<bfsPair.second<<"\n";
            if( num == bfsPair.first->data)
            {
                
                ans=true;
            }
            if(bfsPair.first->right!=NULL)bfsQueue.push({bfsPair.first->right,bfsPair.second+1});
            if(bfsPair.first->left!=NULL)bfsQueue.push({bfsPair.first->left, bfsPair.second+1});
            
            
        }
        
    }
    return ans;
}