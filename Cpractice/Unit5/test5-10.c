//求100-200之间的素数
#include<stdio.h>
#include<math.h>
int main(){
	int n,k,i,m=0;
	for(n=101;n<=200;n=n+2){
		k=sqrt(n);
		
		for(i=2;i<=k;i++)
			if(n%i==0) break;
			
		if(i>=k){
			printf("%d\t",n); // \t是一个水平tab空格距离 
			m=m+1;
		}
		
		if(m%10==0) printf("\n");
		
	}
	printf("\n");
	return 0;
} 
