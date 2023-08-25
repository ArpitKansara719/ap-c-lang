//* * * * * * * * * *
//* * * *     * * * *
//* * *	        * * *
//* *			  * *
//*				    *
#include<stdio.h>
int main()
{
	int no;
	printf("Enter No");
	scanf("%d",&no);
	int i;
	int j;
	int k;
	int l;

	for(i=no;i>=1;i--)
	{
		
		for (j=1;j<=2;j++)
		{
			printf("*");
		}
		for(k=1;k<=2*(no-i);k++)
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}