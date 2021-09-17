//比较三个字符串，找出最大者，在英文字典中，越后面的越大。
#include<stdio.h>  //gets输入  puts输出   stract连接   strcpy复制   strncpy复制n个元素  strcmp比较  strlen长度   strlwr 小写 
#include<string.h>  // strupr 大写 
int main(){
	char str[3][20];
	char string[20];
	int i;
	for(i=0;i<3;i++)
	  gets(str[i]);
	if(strcmp(str[0],str[1])>0)
	   strcpy(string,str[0]);
	else
	   strcpy(string,str[1]);
	if(strcmp(str[2],string)>0)
	   strcpy(string,str[2]);
	   
	printf("\nthe largest string is:\n%s\n",string);
	return 0;
} 
