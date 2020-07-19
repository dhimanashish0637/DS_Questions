#include<iostream>
using namespace std;
class circular
{
	int rear,front,size;
	int *arr;
	public:
	circular(int s)
	{
		size=s;
		front=rear=-1;
		arr=new int(s);
	}
	void enqueue(int a);
	void dequeue();
	void display();
};
void circular::enqueue(int a)
{
	if(front==0 && rear==size-1 || front==(rear+1)%(size-1))
	{
		cout<<"queue is full";
	}
	else  if(front==-1)
	{
		front=rear=0;
		arr[rear]=a;
		
	}
	else if(rear==size-1 && front!=0)
	{
		rear=0;
		arr[rear]=a;
}
	else
	arr[++rear]=a;

}
void circular::dequeue()
{
	if(front==-1)
	{
		cout<<"queue is underflow";
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==size-1)
	{
		front=0;
	}
	else
	{
		front++;
	}
}
void circular::display()
{
	if(front==-1)
	{
		cout<<"queue is empty";
	}
	else if(rear>front)
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<"c"<<arr[i]<<endl;
		}
	}
	else
	{
		for (int i=front;i<=size;i++)
          cout<<"a"<<arr[i]<<endl;
 
        for (int i=0;i<=rear;i++)
           cout<<"b"<<arr[i]<<endl;
	}
}
int main()
{
	int n,a,ch;
	cin>>n;
	circular c(n);
	cout<<"enter choice 1 for insertion 2 for deletion 3 for display"<<endl;
	while(1)
 {
		
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter element"<<endl;
			cin>>ch;
			c.enqueue(ch);
			break;
		case 2:
			c.dequeue();
			break;
		case 3:
			c.display();
            break;
	}
}
	
}
