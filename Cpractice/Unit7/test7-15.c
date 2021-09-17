//比较全局变量和局部变量
#include<stdio.h>
int a=3,b=5;
int main(){
    int max(int a,int b);
    int a=8;  //在局部变量的作用范围，局部变量有效
    printf("max=%d\n",max(a,b));
    return 0;
}

int max(int a,int b){
    int c;
    c=a>b?a:b;
    return(c);
}