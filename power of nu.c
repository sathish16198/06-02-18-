#include<stdio.h>
void main()
{
int a,b,c=1;
printf("Enter the number\n");
scanf("%d",&a);
printf("Enter the power\n");
scanf("%d",&b);
while(b!=0)
{
    c*=a;
    --b;
}
printf("Answer=%d",c);
}
