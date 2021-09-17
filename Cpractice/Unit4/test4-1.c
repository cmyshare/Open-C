//求一元二次方程的根
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c); //输出长型双精度浮点数类型 
	disc=b*b-4*a*c;
	if(disc<0){
		printf("This equation hasn't real roots\n");
	}else{
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q; x2=p-q;
		printf("real roots:\n x1=%7.2f\n x2=%7.2f\n",x1,x2);
	}
	return 0;
}
 
