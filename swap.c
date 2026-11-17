#include<stdio.h>
int main()
{
    int a,b,t;
    a=10;
    b=5;

    printf("before swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);

    t=a;
    a=b;
    b=t;

    printf("\n\n\nafter swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}
