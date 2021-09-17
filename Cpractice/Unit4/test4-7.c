//用switch语句处理菜单命令
#include<stdio.h>
int main(){
	void action1(int,int),action2(int,int);  //用void定义方法 
	char ch;
	ch=getchar();
	int a=15,b=23;
	switch(ch){
		case 'a':
		case 'A': action1(a,b);    //判断嵌套 
		break;
		case 'b':
		case 'B': action2(a,b);
		break;
		default: putchar('\a');

	} 
	return 0;
} 

void action1(int x,int y){    //在main()外定义方法 
	printf("x+y=%d\n",x+y);
	
}

void action2(int x,int y){
	printf("x*y=%d\n",x*y);
}
