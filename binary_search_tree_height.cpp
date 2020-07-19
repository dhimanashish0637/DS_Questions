#include<stdio.h> 
#include<iostream>
using namespace std;
struct node  
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 

struct node* newNode(int data)  
{ 
    struct node* temp = new node;
    temp->data = data; 
    temp->left = NULL; 
    temp->right = NULL; 
    
    return(temp); 
} 
struct node*insert(struct node* node, int data) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(data); 
  
    /* Otherwise, recur down the tree */
    if (data < node->data) 
        node->left  = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 
int maxDepth(struct node* node)  
{ 
   if (node==NULL)  
       return 0; 
   else 
   { 
       /* compute the depth of each subtree */
       int lDepth = maxDepth(node->left); 
       int rDepth = maxDepth(node->right); 
  
       /* use the larger one */
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 
}  
  
    
int main() 
{ 
    struct node *root =NULL;
    int n,i,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>a;
    	root=insert(root,a);
	}
	 
    cout<<"Height of tree is "<<maxDepth(root); 
    cout<<"Depth of tree is "<<maxDepth(root)-1;
    return 0; 
} 
