#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	switch(n%2)
	{
		case 0 :printf("%d is even\n",n);
		break;
	    case 1:printf("%d is odd\n",n);
		break;
	}
	return 0;
	
}
