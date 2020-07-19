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
	//cout<<"new node is"<<new_node->next;
	* head=new_node;
	//cout<<"*head is "<<*head;
}
/*void append(struct node** head, int data)
{

    struct node *new_node = new node;
 
    struct node *last = *head;  

    new_node->data  = data;
 
  
    new_node->next = NULL;
 
    
    if (*head == NULL)
    {
       *head = new_node;
       cout<<"*head is"<<*head;
     return;
    }

   while (last->next != NULL)
        last = last->next;
 cout<<"last is"<<last;
      last->next = new_node;
cout<<"last->next is"<<last->next;
}*/
void insertAfter(struct node *prev, int data)
{
    /*1. check if the given prev_node is NULL */
    if (prev == NULL)
    {
      cout<<"the given previous node cannot be NULL";
      return;
    }
 
    /* 2. allocate new node */
    struct node *new_node =new node;
 
    /* 3. put in the data  */
    new_node->data  = data;
 
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev->next;
 
    /* 5. move the next of prev_node as new_node */
    prev->next = new_node;
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
	insertAfter(head->next, 8);

	printlist(head);
}
