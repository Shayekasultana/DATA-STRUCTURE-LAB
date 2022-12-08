#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *right;
    Node *left;
    Node(int value)
    {
        data=value;
        right=NULL;
        left=NULL;
    }

};
Node *insertBST(Node *root,int value)
{
    if(root==NULL)
    {
        root= new Node(value);

    }
    else
    {
        if(root->data>value)
        {
            root->left=insertBST(root->left,value);

        }
        else
        {
            root->right=insertBST(root->right,value);
        }
    }
    return root;
}
void inorder(Node *root)
{
    if(root==NULL){
      return;
    }

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);



}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node *root=NULL;
    root=insertBST(root ,5);
    root=insertBST(root,13);
    root=insertBST(root,1);
    root=insertBST(root,4);
    root=insertBST(root,2);
    root=insertBST(root,8);
    root=insertBST(root,9);
    cout<<"INORDER: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"PREORDER: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"POSTORDER: "<<endl;
    postorder(root);

}
