#include<stdio.h>
int main()
{
	char x;
	printf("enter the character");
	scanf("%d",&x);
	if(x>=65 && x<=90){
		printf("upper case character");
	}
	else if(x>=97 && x<=122)
	{
		printf("lower case character");
	}
	else if(x>=48 && x<=57)
	{
		printf("greater character");
	}
	return 0;
}
