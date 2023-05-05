
/*provide input as -1 if any node is not present*/
#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node *left;
    Node * right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
 };
Node*  buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left =buildTree();
    n->right=buildTree();
    return n;
}
void print_preorder(Node* root){
     if(root==NULL){
        return;
     }
     cout<<root->data;
    print_preorder(root->left);
    print_preorder(root->right);
}
void print_inorder(Node* root){
     if(root==NULL){
        return;
     }
    
    print_inorder(root->left);
     cout<<root->data;
    print_inorder(root->right);
}
void print_postorder(Node* root){
     if(root==NULL){
        return;
     }
     
    print_postorder(root->left);
    print_postorder(root->right);
    cout<<root->data;
}

int main(){
  Node * root=buildTree();
  print_preorder(root);
  cout<<endl;
  print_inorder(root);
  cout<<endl;
  print_postorder(root);               
 //code here                
return 0;
}
