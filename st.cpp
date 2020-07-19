#include<iostream>
using namespace std;
struct node
{
	node *next;
	int data;
};
/*void push(struct node **head,int data)
{
struct node *new_node=new node;
new_node->data=data;
new_node->next=*head;
*head=new_node;
	
}*/
void append(struct node **head,int data)
{
	struct node *new_node=new node;

 
    struct node *last = *head;  /* used in step 5*/
 
    /* 2. put in the data  */
    new_node->data  = data;
 
    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
   if (*head== NULL)
    {
       *head = new_node;
     return;
    }
 
/*    5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
   
}
/*void printlist(node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}*/
void printlist(node *head)
{
	 struct node *temp;
	 temp=head;
    //temp=start;
    while(temp!=NULL)
    {
 cout<<temp->data;
    temp=temp->next;
    }
}
int main()
{
	struct node *head=NULL;
	/*push(&head,10);
	push(&head,20);
	push(&head,30);*/
	append(&head,10);
	append(&head,20);
	append(&head,30);
	append(&head,40);
	printlist(head);
//printlist();
}
