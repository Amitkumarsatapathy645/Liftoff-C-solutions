#include<stdio.h>
int main()
{
	int a,b,num;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("enter your choice:\n");
	scanf("%d",&num);
	switch(num)
	{
		case 0:printf("sum of %d and %d is :%d \n",a,b,a+b);
		break;
		case 1:printf("substraction of %d and %d is :%d\n",a,b,a-b);
		break;
		case 2:printf("multiplication of %d and %d is :%d\n",a,b,a*b);
		break;
		case 3:printf("division of %d and %d is :%d\n",a,b,a/b);
		break;
		default :printf("not valid\n");
		break;
	}
	return 0;
}
