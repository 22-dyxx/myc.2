#include<stdio.h>
int main()
{
	int score;
	printf("====switch游戏打分器====\n");
	printf("输入0直接退出\n");
	while(1){
	printf("请输入评分(1~5): \n");
	scanf("%d",&score);
	
	switch(score){
	case 0:printf("感谢使用，程序已退出！\n");return 0;
	case 1:printf("太无聊了，不好玩\n");break;
	case 2:printf("一般般，没什么感觉\n");break;
	case 3:printf("还行吧，勉勉强强\n");break;
	case 4:printf("还不错，手感还可以\n");break;
	case 5:printf("不错，很推荐，好玩\n");break;
	default:printf("请输入1~5的评分\n");break;
		}
	}	
	return 0;
}
