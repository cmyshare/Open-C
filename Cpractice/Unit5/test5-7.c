//求圆周率的近似值
#include<stdio.h>
#include<math.h>
int main(){
	int sign=1;
	double pi=0.0,n=1.0,term=1.0;
	    

	while(fabs(term)>=pow(10,-6)){    //fabs()函数求双精度数的绝对值   abs()函数求整数的绝对值 
		 pi=pi+term;       //pow(10,-6) 10的负6次方 
		n=n+2;
		sign=-sign;
		term=sign/n;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	return 0;
}
