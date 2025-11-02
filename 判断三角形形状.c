int main()
{
	double a,b,c;
	printf("请输入三角形的三边: \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a){
	
	  if(a==b&&b==c){
	printf("此三角形为等边三角形\n");
	}else{
		if(a==b&&b!=c){
		printf("此三角形为等腰三角形\n");
		}
		else{
			if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b)){
				printf("此三角形为直角三角形"); 
			}
			else printf("此三角形为普通三角形");
		}
	}
  }else printf("不构成三角形");
  return 0;
} 
