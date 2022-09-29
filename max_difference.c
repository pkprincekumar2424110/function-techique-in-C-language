#include <stdio.h>

int main(){
	int j,i,n,temp;
	printf("enter the length of array is\n");
	scanf("%d", &n); 
	int a[n];
	printf("enter the element in array \n");    
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}      	   
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
               temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
			}
		}
	}
    printf("SORTED ARARY IS\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    	if(n==1)
	{
	  printf("\ntotal weight is 0");              // Reading input from STDIN
    }
	else     // Writing output to STDOUT
    {
      int w,y,x,u[2],v[n-2];
      u[0]=a[0];
      u[1]=a[n-1];
	for(i=0;i<n-2;i++)
	{
		v[i]=a[i+1];
	}
	x=u[1]-u[0];
	y=v[n-3]-v[0];
	w=x+y;
	printf("\ntotal weight is %d",w);
	}


	return 0;
}
