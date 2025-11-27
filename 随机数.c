#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n;
	srand((unsigned int)time(NULL));
	printf("随机生成10个数字\n");
	for(i=0;i<10;i++)
	{
		n=rand()%100;
		printf("%d ",n);
	}
	return 0;
}
