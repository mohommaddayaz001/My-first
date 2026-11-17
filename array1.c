#include<stdio.h>
int main(){
int a[2][2],sum[2][2],i,j;

printf("\nEnter elements of 1st matrix:\n");
for(i=0;i<2;++i){
    for(j=0;j<2;++j){
    scanf("%d",&a[i][j]);
}
}
printf("\nEnter elements of 2nd matrix:\n");
for(i=0;i<2;++i){
    for(j=0;j<2;++j){
    scanf("%d",&b[i][j]);
}
}
printf("elements of 1st matrix\n");
for(i=0;i<2;++i){
    for(j=0;j<2;++j){

            printf("%d",a[i][j]);
    }
}
printf("elements of 2nd matrix");
for(i=0;i<2;++i){
    for(j=0;j<2;++j){
    }
}
return 0;
}
