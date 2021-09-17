#include<stdio.h>
//华氏温度转换成摄氏温度
int main(){
	float f,c;//	float单精度浮点型
	f=64.0;
	c=(5.0/9)*(f-32);
	printf("f=%f\n c=%f\n",f,c);
	return 0;
} 
