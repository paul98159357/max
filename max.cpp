#include<stdio.h>
#include<stdlib.h>

int *max(int *,int *);

int main (void){
	int a=12,b=18,*ptr;
	ptr=max(&a,&b);
	printf("%d",*ptr);
	system("pause");
	return 0;
}

int *max(int *p1,int *p2)
{
	if(*p1>*p2)
		return p1;
	else
		return p2;
}
