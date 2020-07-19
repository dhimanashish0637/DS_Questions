#include <bits/stdc++.h>
using namespace std;
char first(string str)
{
 int i=0; 
 while(str[i]!='\0')
 {
  if(str[i]>=65 && str[i]<=90) 
  {

/*   if (isupper(str[i]))*/
            return str[i];
    
	 }
	 i++;
	  }
}


int main()
{
 string str;
 getline(cin,str);
  char res = first(str);
  
   if (res == 0)
    cout << "No uppercase letter";
	 else 
	 cout << res << "\n";
	  return 0;
	  }
