#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if (age>=18 && age<=85){
		printf("eligiable for voting");
	}
	else{
		printf(" not eligiable for voting");
	}
	return 0;
}
