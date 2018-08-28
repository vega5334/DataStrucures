
*******************************************************************************/

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
        queue < Node*> R;
        R.push( root);
        while( ! R.empty())
        {
            Node* current= R.front();
            R.pop();
            if( num == current->data) ans=true;
            if(current->left!=NULL)R.push(current->left);
            if(current->left!=NULL)R.push(current->right);
            
            
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
