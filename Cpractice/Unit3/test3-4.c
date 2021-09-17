#include<stdio.h>
#include<math.h> 
//求三角形面积
 int main(){
 	double a,b,c,s,area;
 	a=3.67;
 	b=5.43;
 	c=6.21;
 	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));    //\t 水平制表符  转移到下一个tab位置 
	printf("a=%f\t b=%f\t c=%f\n",a,b,c);  //%f输出实数(单双精度、长双精度)小数部分输出6位 
	printf("area=%f\n",area);
	return 0; 
 }
