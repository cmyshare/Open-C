//判断一个数是否为素数 
#include<stdio.h>
#include<math.h>
int main(){
//	int n,i;
//	printf("please enter a integer number,n=?");
//	scanf("%d",&n);
//	for(i=2;i<=n-1;i++){
//		if(n%i==0) break;
//	}
//	    if(i<n) printf("%d is not\n",n);
//		else printf("%d is a\n",n);
//        return 0;	
        
    //代码优化 判断素数，只需判断是否被2-根号n之间的数整除 
        	int n,i,k;
	printf("please enter a integer number,n=?");
	scanf("%d",&n);
	k=sqrt(n);  //求根号下K的值 
	for(i=2;i<=k;i++){
		if(n%i==0) break;
	}
	    if(i<k) printf("%d is not\n",n);
		else printf("%d is a\n",n);
        return 0;	
} 
