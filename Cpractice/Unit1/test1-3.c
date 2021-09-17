#include<stdio.h>
//求两个整数中的较大者
int main(){
	int max(int x,int y);
	int a,b,c;
	scanf("%d,%d",&a,&b);   //&表示房间地址符  scanf输入函数  %d十进制输入形式  %o八进制输入形式  %x十六进制 
    
	c=max(a,b);
	printf("%X\n",c);     // \n换行符 
	printf("max=%d\n",c);
	return 0;
} 

int max(int x,int y){
	int z;
	if(x>y){
		z=x;
	}else{
		z=y;
	}
	return(z);
}
