#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	return (n%10+sum(n/10));
}
int main()
{
	int n,res;
	printf("Enter a number:");
	scanf("%d",&n);
	res=sum(n);
	printf("sum of digits=%d",res);
}

