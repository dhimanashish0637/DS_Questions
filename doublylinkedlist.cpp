#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
};
void push(struct node **head,int data)
{
	struct node *new_node=new node;
	new_node->data=data;
	new_node->next=*head;
	cout<<"new_node->next"<<new_node->next<<endl;
    new_node->prev=NULL;
	cout<<"new_node->prev"<<new_node->prev<<endl;    
     if ((*head) != NULL)
        (*head)->prev = new_node;
 	//cout<<"*head->prev"<<(*head)->prev<<endl;
  
    (*head) = new_node;
    	cout<<"*head"<<(*head)<<endl;
}
void printList(struct node* node)
{
    struct node* last;
    cout<<"in forward"<<endl;
    while (node != NULL) {
        cout<<node->data<<" ";
        last = node;
        node = node->next;
    }
 
   cout<<"in reverse direction"<<endl;
    while (last != NULL) {
       cout<<last->data<<" ";
        last = last->prev;
    }
}
int main()
{
	struct node *head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	printList(head); 
}
