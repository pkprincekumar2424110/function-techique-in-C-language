//write a program to find the vlaue of f(x)=x^2+4, for the given of x. Make use of function technique.
# include <stdio.h>
int function(int x)
{
    return x*x+4;
}
int main()
{
    int x;
    printf("enter the value of x ");
    scanf("%d",&x);
    printf("the value of  f(x)=x^2+4 is %d",function(x));
    return 0;
}