#include<stdio.h>
int main()
{
	float r,PI=3.14;
	printf("enter the radious of the circle\n");
	scanf("%f",&r);
	printf("diameter of the circle is :%f\n",r+r);
	printf("circumference of the circle is :%f\n",2*PI*r);
	printf("area of the circle is :%f\n",PI*r*r);
	return 0;
}
