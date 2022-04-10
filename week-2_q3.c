#include<stdio.h>
#include<conio.h>
void main()
{
	int num,r=0,firstdigit,lastdigit,temp,swap,c,d;
	printf("enter a number\n");
	scanf("%d",&num);
	temp=num;
	lastdigit=num%10;
	while(num>=10)
	{
	num=num/10;
    }
	firstdigit=num;
	num=temp/10;
	while(num>10)
	{
		c=num%10;
		r=r*10+c;
		num=num/10;
	}
	swap=lastdigit;
	while(r>0)
	{
		d=r%10;
		swap=swap*10+d;
		r=r/10;
	}
	swap=swap*10+firstdigit;
	printf("number after swapped is %d\n",swap);
	getch();
}

