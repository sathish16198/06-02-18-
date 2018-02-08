
#include <stdio.h>
void main ()
{
    int a,b,c;
    
    printf("enter the numbers:");
    scanf("%d",&a);
    printf("the power value:");
    scanf("%d",&c);
    b= pow(a,c);
    printf(" the power value is %d^%d=%d",a,c,b);
    
}
