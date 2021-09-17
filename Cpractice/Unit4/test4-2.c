//输入两个实数，按代数值由大到小输出
#include<stdio.h>
int main(){
	float a,b,t;
	scanf("%f,%f",&a,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	printf("%5.2f,%5.2f",a,b);
	return 0;
} 
