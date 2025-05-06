# include <stdio.h>
int main()
{
    int c,f;
    printf("Enter the celsius:\n");
    scanf("%d",&c);
    f = (c * (9/5)) + 32;
    printf("The fahrenheit value:%d\n",f);
    printf("Enter the farhrenheit:\n");
    scanf("%d",&f);
    c=(f-32)*(9/5);
    printf("The celsius values:%d\n",c);
    return 0;
    
}