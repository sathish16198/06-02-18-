
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],i,y=0;
    printf("enter the value for n");
    scanf("%d",&n);
    printf("enter the value of k");
    scanf("%d",&k);
    printf("enter an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        y+=a[i];
    }
    printf("%d",y);
        getch();
}
        
