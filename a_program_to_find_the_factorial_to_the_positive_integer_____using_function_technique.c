# include <stdio.h>

int fact (int n)
{
    int i,f=1;
   for (i=1;i<=n;i++)
   {
    f=f*i;    
   }
   
   return (f);
}
int main()
{
    int n;
      printf("enter the number ");
      scanf("%d",&n);
      printf("factorise of the entered number is %d",fact(n));
    return 0;
}