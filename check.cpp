#include<stdio.h>
using namespace std;
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	cout<<"Enter the username:";
	cin>>s1;
	cout<<"re-enter the username:";
	cin>>s2;
	if(strcmp(s1,s2)!=0)
	{
		cout<<"invalid username";
		
	}
	else
	{
		cout<<"valid username";
	}
	return 0;
}
	
}
