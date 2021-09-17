#include<stdio.h>
//计算存款利息
int main(){
	void dump(); //空函数 

	float p0=1000,rl=0.0036,r2=0.0225,r3=0.0198,p1,p2,p3;//float单精度浮点型
	p1=p0*(1+rl);
	p2=p0*(1+r2);
	p3=p0*(1+r3);
	printf("p1=%f\n p2=%f\n p3=%f\n",p1,p2,p3);
	return 0;
} 
