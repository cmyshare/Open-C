//学生捐款，统计人数，人均多少
#include<stdio.h>
#define SUM 100000   //用const定义常变量 如const float pi=3.1415926    用#define定义符号常量 
int main(){
	float amount,aver,total;
	int i;
	for(i=1,total=0;i<=1000;i++){
		printf("please enter amount:");
		scanf("%f",&amount);
		total=total+amount;
		if(total>SUM){
			break;
		}
	}
	aver=total/i;
	printf("num=%d\n aver=%10.2f\n",i,aver);
	return 0;
} 
