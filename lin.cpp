#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
};
void push(struct Node **head,int ndata)
{
	struct Node *temp=new Node;
	temp->data=ndata;
	temp->next=*head;
	*head=temp;
}
void print(struct Node *head)
{
	
	while(head!=NULL)
	{
		if(head->data<head->next->data)
		{
			int tem=head->data;
			head->data=head->next->data;
		head->next->data=tem;
		head=head->next;
		}
		else
		{
			head=head->next;
		}
	}
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
 
int main()
{
	struct Node *head=NULL;
    push(&head,1); 
    push(&head, 2); 
    push(&head, 3);  
	//insertAfter(head->next, 8);                                       
  //cout<<"before"<<endl;
  print(head);  
  //cout<<"after"<<endl;
//  print(head);           
}
