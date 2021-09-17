#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//求5的阶乘
int main() {
	int i,t;
	t=1;
	i=2;
	while(i<=5){
		t=t*i;
		i=i+1;
	}
	printf("%d\n",t); 
	return 0;
}
