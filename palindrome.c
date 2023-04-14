#include<stdio.h>
int palindrome(int );

int main()
{
	int num,res;

	printf("Enter the number : ");
	scanf("%d",&num);

	res=palindrome(num);

	if (res == num)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}
	return 0;
}
int palindrome(int n)
{
	int rem, sum=0;
	while(n != 0)
	{

		rem = n %10;
		sum = sum*10 + rem;
		n = n / 10;
	}
	return sum;
}
