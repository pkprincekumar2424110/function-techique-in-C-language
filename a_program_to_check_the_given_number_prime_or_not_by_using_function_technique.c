#include <stdio.h>
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("given no is not prime");
            flag=1;
            break;
        }
    }
return(flag);
}
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    if(prime(n)==0)
    {
     printf("given number is prime");
    }
    return 0;
}