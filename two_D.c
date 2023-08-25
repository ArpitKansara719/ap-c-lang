#include<stdio.h>
int main()
{
	printf("Enter Column");
	int i;
	scanf("%d",&i);
	printf("Enter row");
	int y;
	scanf("%d",&y);
	
	int r[i][y];
	int a;
	int b;
	
	for(a=0;a<i;a++)
	{
		for(b=0;b<y;b++)
		{
			scanf("%d",&r[a][b]);
		}
	}
	printf("-- Finally print-- \n");
	
	for(a=0;a<i;a++)
	{
		for(b=0;b<y;b++)
		{
			printf("%d",r[a][b]);
		}
	}
	return 0;
}