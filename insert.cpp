#include<iostream>
int main()
{
	int num,i,b,value,ab;
	std::cout<<"Enter Number of terms:";
	std::cin>>num;
	int a[100];
	for(i=0;i<num;i++)
	{
	std::cin>>a[i];
    }
    std::cout<<"Enter 1 for insertion:"<<std::endl;
    std::cout<<"Enter 2 for deletion:";
    std::cin>>ab;
    if(ab==1)
    {
    std::cout<<"Enter index number to be replaced:";
    std::cin>>b;
    std::cout<<"Enter value to be inserted:";
    std::cin>>value;
    for(i=num-1;i>=b-1;i--)
	{
    	a[i+1]=a[i];
	}
    	num++;
		a[b-1]=value;
	for(i=0;i<num;i++)
	{
	std::cout<<a[i]<<std::endl;
	}
}
else if(ab==2)
{
	int idx;
    std::cout<<"Enter index number to be deleted:";
    std::cin>>idx;
    for(i=idx;i<num;i++)
	{
    a[idx-1]=a[idx];
    	idx++;
	}
  	num--;
	for(i=0;i<num;i++)
	{
		std::cout<<a[i];
	}
}
else
{
	std::cout<<"Invalid option.";
}
    return 0;
}
