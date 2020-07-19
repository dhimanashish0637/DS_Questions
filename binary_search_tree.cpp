#include<iostream>
using namespace std;
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
    struct node *temp =  new node; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<<root->key<<endl; 
        inorder(root->right); 
    } 
} 
void postorder(struct node* root) 
{ 
    if (root == NULL) 
        return; 
    postorder(root->left); 
    postorder(root->right); 
    cout << root->key <<endl; 
}
struct node*insert(struct node* node, int key) 
{
   if (node == NULL) return newNode(key); 
       if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
   return node; 
} 
 
int main() 
{ 
   /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    struct node *root = NULL; 
    root = insert(root, 50);
	root = insert(root, 30); 
    root = insert(root, 20); 
    root =  insert(root, 40); 
    root =  insert(root, 70); 
    root =  insert(root, 60); 
    root = insert(root, 80); 
    inorder(root); 
    cout<<"postorder"<<endl;
    postorder(root);
    return 0; 
}
