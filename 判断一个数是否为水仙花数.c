#include<stdio.h>
int main()
{
	int a,b,c,i;
	char ch;
	printf("请输入一个三位数:\n");
	ch=getchar();
	a=ch-'0';
	ch=getchar();
	b=ch-'0';
	ch=getchar();
	c=ch-'0';
	i=a*100+b*10+c;
	if(i==a*a*a+b*b*b+c*c*c) printf("%d是水仙花数\n",i);
	else printf("%d不是水仙花数\n",i);
	return 0;
}
