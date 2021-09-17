//用字符型数组输出已知的字符串
#include<stdio.h>
int main(){
	char a[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.'}; //单引号中无值时，需要空格 
	int i;
	for(i=0;i<15;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
} 
