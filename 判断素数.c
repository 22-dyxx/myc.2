#include<stdio.h>
int main()
{
    int i,n;
    printf("请输入一个数字:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)break;
    if(i<n) printf("不是一个素数\n");
    else printf("是一个素数\n");
    return 0;
}
    
