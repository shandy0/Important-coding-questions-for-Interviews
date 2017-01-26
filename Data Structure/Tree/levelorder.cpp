#include<bits/stdc++.h>
using namespace std;
struct node {
int data;
node *left;
node *right;
};
node * insert(node * root, int data){
    node *temp=new node();
    temp->data=data;
    if(root == NULL){
      root=temp;
      return root;
    }
    return temp;
}
void level_order(node *root){
    if(root == NULL){
      return;
     }
   queue<node*>q;
   q.push(root);
   node * temp;
   while(!q.empty()){
   int size=q.size();
   while(size--){
    temp=q.front();
    
    if(temp->left != NULL){
     q.push(temp->left);
}
if(temp->right != NULL){
   q.push(temp->right);
}
   q.pop();
   cout<<temp->data<<" ";
    
   

  }
cout<<"\n";

}

}
int main(){
node *root=NULL;
root=insert(root,1);
root->left=insert(root,2);   
root->right=insert(root,3); 
root->left->left=insert(root,4); 
root->left->right=insert(root,5);
root->right->left=insert(root,6); 
root->right->right=insert(root,7);
level_order(root);
 
}
