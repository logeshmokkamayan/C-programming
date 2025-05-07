#include <stdio.h>
int multi(int a, int b);
void greet();
void printresult(int result);

int main()
{
    int num1,num2;
    printf("Enter the value");
    scanf("%d",&num1);
     printf("Enter the value");
    scanf("%d",&num2);
    int sum =multi(num1,num2);
    printresult(sum);
    return 0;
}

int multi(int a, int b){
    return a*b;
    
}

void greet(){
    printf("Welcome to the function demo program\n");
}

void printresult(int result){
    printf("%d",result);
}
