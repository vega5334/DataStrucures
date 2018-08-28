

#include <iostream>
#include<queue>

using namespace std;
struct Node{
    Node* left=NULL;
    Node* right=NULL;
    int data;
};
bool bfsSearch(Node* root, int num)
{
    bool ans=false;
    if(root==NULL)
        cout<<" Tree empty !";
    else
    {
        
        queue < Node*> bfsQueue1;queue <Node*> bfsQueue2;
        bfsQueue1.push( root);
        while( !bfsQueue1.empty() || !bfsQueue2.empty())
        {
            while( !bfsQueue1.empty())
            {
                Node* current= bfsQueue1.front();
                bfsQueue1.pop();
                if( num == current->data) ans=true;
                cout<< current->data<<" ";
                if(current->left!=NULL)bfsQueue2.push(current->left);
                if(current->right!=NULL)bfsQueue2.push(current->right);
                
                
            }
            cout<< "\n";
            while(!bfsQueue2.empty())
            {
                Node* current2= bfsQueue2.front();
                bfsQueue2.pop();
                cout<<current2->data<<" ";
                if(current2->left!=NULL)bfsQueue1.push(current2->left);
                if(current2->right!=NULL)bfsQueue1.push(current2->right);
                
            }
            cout<<"\n";
        }
    }
    
    return ans;
}
Node* insertNode(Node* root, int num)
{
    if( root==NULL)
    {
        root=new Node();
        root->data=num;
        root->left=root->right=NULL;
    }
    else if (num<root->data)  root->left=insertNode(root->left, num);
    else  root->right=insertNode(root->right, num);
    return root;
}
int main()
{
    Node* root=NULL;
    bool answer;
    root=insertNode(root, 7);
    insertNode(root,5);
    insertNode(root,9);
    insertNode(root,4);
    insertNode(root,6);
    insertNode(root,8);
    insertNode(root, 10);
    answer=bfsSearch(root,4);
    cout<<answer;
    return 0;
}
