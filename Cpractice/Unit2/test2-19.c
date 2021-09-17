#include<stdio.h>
//求多项式的值 
int main(){
	int sign=1;
	double deno=2.0,sum=1.0,term; //双精度浮点型 浮点类型
	while(deno<=100){
		sign=-sign;
		term=sign/deno;
		sum=sum+term;
		deno=deno+1;
	} 
	printf("%f\n",sum);  //%f,%F,%e,%E,%g,%G 用来输入实数，可以用小数形式或指数形式输入。
	return 0;
} 
