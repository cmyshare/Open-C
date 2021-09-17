//静态局部变量的值
#include<stdio.h>
int main(){
    int f(int a); //默认自动局部变量
    int a=2,i;
    for(i=0;i<3;i++)
        printf("%d\n",f(a));
    return 0;
}

int f(int a){
    auto int b=0;  //自动局部变量    按需要动态分配存储空间，调用结束后释放
    static int c=3;  //静态局部变量   固定存储空间，调用结束后不释放
    b=b+1;
    c=c+1;
    return(a+b+c);
}
