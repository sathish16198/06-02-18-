#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("Enter a numbers: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        n /= 10;
        ++count;
    }
     printf("Number of digits you entered is : %d", count);
}
