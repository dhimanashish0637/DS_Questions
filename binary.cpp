#include<iostream>
using namespace std;
int main()
{
int m,arr[100],num,i,a=0,b,x;
cin>>num;
for(i=0;i<num;i++)
{
cin>>arr[i];	
}
cin>>x;
b=num-1;
//m=a+b/2;
while(a<=b)
{
if(arr[m]==x)
{
	cout<<"Element Found";
	break;
}
else if(arr[m]>x)
{
	b=m-1;
}
else
{
	a=m+1;
}
m=a+b/2;
}
}
