#include<iostream>
using namespace std;
void  hello(int x)
{
	if(x>0)
	{
		hello(--x);
		cout<<x;
		hello(--x);
	}
}
int main()
{
	int a=4;
	hello(4);
	return 0;
}
