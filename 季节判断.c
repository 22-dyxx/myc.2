#include<stdio.h>
int main()
{
    int season;
    printf("请输入一个数字: \n");
    scanf("%d",&season);
    switch(season){
    case 3:
    case 4:
    case 5:printf("%d月为春季\n",season);break;
    case 6:
    case 7:
    case 8:printf("%d月为夏季\n",season);break;
    case 9:
    case 10:
    case 11:printf("%d月为秋季\n",season);break;
    case 12:
    case 1:
    case 2:printf("%d月为冬季\n",season);break;
    default:printf("请输入1～12的数字\n");break;
    }
    return 0;
}
