# include <stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("After swappping :%d and %d \n",a,b);
    return 0;
}