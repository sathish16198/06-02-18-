#include <stdio.h>
void main()
{
    int a,c,e=0;
    printf("Enter a number:,a\n");
    scanf("%d",&c);
    a=c;
    while(a!=0)
    {
        e=e*10;
        e=e+a%10;
        a=a/10;
    }
    if(a==e)
    {
    printf("The number is palindrome.");
    }
    else
    printf("The number is not palindrome.");
    return 0;
}
