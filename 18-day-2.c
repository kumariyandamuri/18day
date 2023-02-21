//program to print given number is Armstrong number or not
#include<stdio.h>
main()
{
	int n,i,r,sum,num;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
	}
	if(sum==num)
	{
	
	printf("Armstrong");
    }
	else
	{
	
	printf("Not Armstrong");
    }
	
}
