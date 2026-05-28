#include<stdio.h>
int main ()
{
int i,d,n;
printf("enter the number");
scanf("%d",&n);
printf("multiplication table of given number\n");
for(i=1;i<=10;i++)
{
    printf("%d*%d=%d",n,i,i*n);
    printf("\n");
}
return 0;
}