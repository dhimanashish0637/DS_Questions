#include<iostream>
using namespace std;
class queue
{
	int *queue1;
	int rear,front;
	public:
		queue(int a)
		{
			queue1=new int(a);
			rear=-1;
			front=-1;
		}
		void enqueue(int x)
		{
			if(rear>4)
			{
				cout<<"queue overflow";
				front=rear=-1;
				return;
			}
			queue1[++rear]=x;
		//cout<<"element insertion"<<x<<endl;
		}
		void deque()
		{
			if(front==rear)
			{
				cout<<"queue undeerflow";
				return;
			}
			cout<<"deleted"<<queue1[++front];
		}
		void display()
		{
			if(rear==front)
			{
				cout<<"queue empty";
				return;
			}
			for(int i=front+1;i<=rear;i++)
			{
				cout<<queue1[i]<<" "<<endl;
			}
		}
		
};
int main()
{
	int ch,a;

    cout<<"enter size"<<endl;
	cin>>a;
	queue que(a);
	cout<<"enter choice 1 for insertion 2 for deletion 3 for display"<<endl;
	while(1)
 {
		
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter element"<<endl;
			cin>>ch;
			que.enqueue(ch);
			break;
		case 2:
			que.deque();
			break;
		case 3:
			que.display();
            break;
	}
  }
}
