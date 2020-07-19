#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int a=n/2;
	int flag=0;
	for(int i=0;i<=a;i++)
	{
		int c=i;
		
		int rev=0,b;
		while(c!=0)
		{
		b=c%10;
		rev=rev*10+b;
		c=c/10;
     	}
		if((i+rev)==n)
		{
			flag=1;
			cout<<i<<" "<<rev;
			break;
		}
		
	}
	if(flag==0)
	{
			cout<<"Not a mystery number";
	}

	
}
