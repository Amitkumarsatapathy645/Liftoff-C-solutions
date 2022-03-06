#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is maximum\n",a);
    }
    else
    {
        printf("%d is maximum\n",b);
    }
    return 0;
}
