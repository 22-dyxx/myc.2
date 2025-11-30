#include<stdio.h>
int main()
{
	int mid,n,left=0,right=14,pos=-1;
	int a[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	printf("请输入要查找的数:\n");
	scanf("%d",&n);
	while(left<=right)
	{
		mid=(left+right)/2;
		if(n==a[mid])
		{
			pos=mid+1;
			break;
		}else if(n<a[mid])
		{
		left=mid+1;
		}else{
			right=mid-1;
		}
	}
	if(pos!=-1)
	{
		printf("%d为该数组的第%d个数\n",n,pos);
	}else{
		printf("没有这个数\n");
	}
	return 0;
}
