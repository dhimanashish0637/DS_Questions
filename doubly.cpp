#include<iostream>
using namespace std;
struct node
{
	int data;
    struct node *next;
	struct node *prev;
};
void push(struct node **head,int data)
{
	struct node *new_node=new node;
	new_node->data=data;
	new_node->next=*head;
	cout<<"new_node->next"<<new_node->next<<"  ";
	new_node->prev=NULL;
	cout<<"new_node->prev"<<new_node->prev<<"  ";
	if ((*head) != NULL)
	{
	
        (*head)->prev = new_node;
     //cout<<"*head->prev is "<<(*head)->prev<<"  ";
}
    /* 5. move the head to point to the new node */
    (*head) = new_node;
    
    cout<<"*head"<<*head<<"  ";
}
void printlist(node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
int main()
{
	struct node *head=NULL;
	int a,i;
	for(i=0;i<5;i++)
	{
		cin>>a;
		push(&head,a);
	}
	printlist(head);
}
