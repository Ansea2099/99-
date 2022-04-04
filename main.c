#include<stdio.h>

int main()
{
	int i;
	int j;
	int m;
	int n;
	while(1)
	{
	for( i=01;i<=9;i++)
		{
		for( j=1;j<=i;j++)
			{
			int num=i*j;
			printf("%0.2d*%0.2d=%0.2d ",i,j,num);
			
			}
		printf("\n");
		}


	for( m=9;m<=9&&m>=1;m--)
		{
		for( n=1;n <=m;n++)
			{
			int number=n*m;
			printf("%0.2d*%0.2d=%0.2d ",m,n,number);
			
			}
		printf("\n");
		}

	}

}