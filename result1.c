#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(n>450)
        printf("you have passed the exam");
    else if(n<450)
        printf("congratulations you have failed the exam");
    return 0;

}
