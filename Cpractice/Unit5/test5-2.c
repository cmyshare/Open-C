// 求1到100累加  do while循环 
#include<stdio.h>   
int main(){
	
	int i=1,sum=0;
	do{
		sum=sum+i;
		   i++;
	}
	while(i<=100);
	   
	printf("sum=%d\n",sum);
	return 0;	
	
   
	}

