//求一元二次方程的两个根
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c); //&为地址符 %lf 输入的是双精度实数
	disc=b*b-4*a*c;
	p=-b/(2.0*a);
	 q=sqrt(disc)/(2.0*a);
	 x1=p+q; 
	 x2=p-q;
	 printf("x1=%7.2f\n x2=%7.2f\n",x1,x2);
	 
	 double d=1.0;
	printf("%f\n",d/3); //%f最多只能得到6位小数 
	return 0; 
	
	
	
	
}
