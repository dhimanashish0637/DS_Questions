#include<iostream>
using namespace std;
class Deque1
{
	int b;
    int rear;
    int front;
    int *arr;
	public:
		Deque1(int size)
		{
			b=size;
			arr=new int(b);
			front=-1;
			rear=-1;
		}
		void insertfront(int a);
		void insertrear(int a);
		void deletefront();
		void deleterear();
		void print();
};
void Deque1::insertfront(int a)
{
	if(front==0 && rear==b-1)
	{
	cout<<"overflow";	
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(front==0)
	{
		front=b-1;
	}
	else
	{
		front=front-1;
	}
	arr[front]=a;
}
void Deque1::insertrear(int a)
{
	if(front==0 && rear==b-1)
	{
		cout<<"overflow";
	}
	if (front == -1)
    {
        front = 0;
        rear = 0;
    }
 else if (rear == b-1)
        rear = 0;
 else
        rear = rear+1;
 
      arr[rear] = a ;
}
void Deque1::deletefront()
{
	if(front==-1 && rear==-1)
	{
		cout<<"empty";
	}
	if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        
        if (front == b -1)
            front = 0;
 
        else
		 front = front+1;
}
void Deque1::deleterear()
{	if(front==-1 && rear==-1)
	{
		cout<<"empty";
	}
	 if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = b-1;
    else
        rear = rear-1;
}
void Deque1::print()
{
	for(int i=0;i<b;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	
	int ch,n;
	cout<<"enter size";
	cin>>n;

    Deque1 d(n);
    cout<<"enter choice 1 for insertion 2 for deletion 3 for display"<<endl;
	while(1)
 {
		
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter element"<<endl;
			cin>>ch;
			d.insertfront(ch);
			break;
		case 2:
			cout<<"enter element"<<endl;
			cin>>ch;
			d.insertrear(ch);
			break;
		case 3:
			d.deletefront();
			break;
		case 4:
			d.deleterear();
			break;
		case 5:
			d.print();
            break;
	}
  }

    return 0;

}
