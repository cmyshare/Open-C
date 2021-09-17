//数组元素作为参数，输入10个数，求最大值及位置
#include<stdio.h>
int main(){
   int max(int x,int y); //函数声明
   int a[10],m,n,i;
   printf("enter 10 integer numbers:");
   for(i=0;i<10;i++)    //输入10个数
       scanf("%d",&a[i]);
   printf("\n");

   for(i=1,m=a[0],n=0;i<10;i++){
       if(max(m,a[i])>m){    //若max返回的值大于m
           m=max(m,a[i]);    //max返回值取代m原值
           n=i;     //把次数组元素序号记录下来放在n中
       }
   }
   printf("The largest number is %d\n it is the %dth number.\n",m,n+1);
}

int max(int x,int y){
    return (x>y? x:y);
}




