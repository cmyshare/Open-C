//输入一个字符，判断它是否为大写字母
#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	printf("%c\n",ch);
	return 0;
} 
