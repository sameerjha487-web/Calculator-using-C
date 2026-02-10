#include<stdio.h>
int main()
{
    int a,b,c, perf;
    float division;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    printf("enter number too perform action:");
    scanf("%d", &perf);
    switch(perf){
        case 1: printf("1.sum of two numbers is %d\n", c=a+b);
        break;

        case 2: printf("2.substraction of two numbers is %d\n", c=a-b);
        break;

        case 3: printf("3.product of two numbers is %d\n", c=a*b);
        break;

        case 4: printf("4.modulos of two numbers is %d\n", c=a%b);
        break;

        case 5: printf("5.division of two numbers is %.2f\n", division=(float)a/b);
        break;
    }
return 0;
}