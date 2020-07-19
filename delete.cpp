#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
void push(struct node **head,int data)
{
struct node *new_node=new node;
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
}
void delet(struct node **head,int key)
{ 
	struct node *temp=*head;
	if (temp != NULL && temp->data == key)
	{
	
	*head=temp->next;
delete temp;
}
return;


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
	int i,a;
	for(i=0;i<5;i++)
	{
		cin>>a;
		push(&head,a);
	}
	delet(&head,1);
	printlist(head);
}
