#include<stdio.h>
int main()
{
	int i,number;
	printf("\n please enter the maximum limit value:");
	scanf("%d",&number);
	printf("%n even number between 1 and %d are:\n",number);
	for(i=1;i<=number;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
