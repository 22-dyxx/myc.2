#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	printf("数组为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			if(i==j||i+j==2)
			{
				sum=sum+a[i][j];
			}
		}
		printf("\n");
	}
	printf("对角线的和为%d",sum);
	return 0;
}
