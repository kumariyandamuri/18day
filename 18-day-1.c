 // C-program to print given number is palindrome or not
#include<stdio.h>
main()
{
	int num,rev,n,r;
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
    }
    if(rev==num)
	{
	
    printf("palindrome\n",rev);
    }
    else
    {
	
    printf("not palindrome");
	

}
}
