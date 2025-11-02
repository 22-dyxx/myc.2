#include<stdio.h>
#include<math.h>
int main()
{
	double d,p,r,m;
	printf("请输入借钱数、每月还款额和月利润:\n");
	scanf("%lf %lf %lf",&d,&p,&r);
	m=(log10(p)-log10(p-d*r))/log10(1+r);
	printf("还清月数m=%.1lf\n",m);
	return 0;
} 
