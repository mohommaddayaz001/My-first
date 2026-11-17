//simple calculator using switch case
#include<stdio.h>
int main()
{
    char op;
    float a,b;

    printf("enter operator(+,-,*,/):");
    scanf("%c",&op);

    printf("enter two numbers:");
    scanf("%f %f",&a,&b);

    switch(op)
    {
    case '+':
        printf("result=%.2f\n",a+b);
        break;
        case '-':
        printf("result=%.2f\n",a-b);
        break;
        case '*':
        printf("result=%.2f\n",a*b);
        break;case '/':
        printf("result=%.2f\n",a/b);
        break;
    }
    return 0;
}

