//判断年份是否为闰年
#include<stdio.h>
#include<stdbool.h>  //定义bool逻辑类型头部文件 
//#include<iostream> //c++中的引入逻辑类型头部文件 
#include<math.h>  //数据公式头部文件 
int main(){
	int year;
	bool leap;
	scanf("%d",&year);
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				leap=true;
			}else{
				leap=false;
			}
		}else{
			leap=true;
		}
	}else{
		leap=false;
	}
	
	if(leap==true){
		printf("%d is",year);
	}else{
		printf("%d is not",year);
	}
	return 0;
} 
