//翻译密码  电文-密码-原文 
#include<stdio.h>
int main(){
//	char c;
//	c=getchar();
//	while(c!='\n'){  //输入一个字符，逐个字母进行判断 
//		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
//			if(c>='W'&&c<='Z'||c>='w'&&c<='z') c=c-22;
//			else c=c+4;
//		}
//		printf("%c",c);   //输出加密好的字母 
//		c=getchar();  //把加密好的字母，输入到新的字符中 
//	}
//	printf("\n");
//	return 0;

//代码优化
 	char c;

	while((c=getchar())!='\n'){  //输入一个字符，逐个字母进行判断 
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			c=c+4;
			if(c>='Z'&&c<='Z'+4||c>'z') 
			c=c-26;
	
		}
		printf("%c",c);   //输出加密好的字母 
	
	}
	printf("\n");
	return 0;
}
