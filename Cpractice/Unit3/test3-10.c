//大小写用ASCII码转化
#include<stdio.h>
int main(){
	char c1,c2;
	c1=getchar();
	c2=c1+32;
//	putchar(c2);
//	putchar('\n'); //输出字符    puts输出字符串
	printf("大写字母：%c\n 小写字母：%c\n",c1,c2);
 
	return 0;
} 
