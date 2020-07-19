#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100];
int i,length=0;

gets(a);
for (i = 0; a[i] != '\0'; i++)
    {
         length++;
    }
    cout<<length<<endl;
    cout<<strlen(a);;
/*for(i=0;a[i]!='\0';i++)
{
	cout<<i;
}*/
	return 0;
}
