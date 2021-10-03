#include<stdio.h>
int main()
{

int i,n,fact=1;
printf("Enter the number \n",n);
scanf("%d",&n);
if(n==0)
{
	fact=1;
}
else if(n>0)
for(i=1; i<=n; i++)
{

fact=fact*i;
printf("The factorial of the given number is %d=%d \n",n,fact); 
}

}
