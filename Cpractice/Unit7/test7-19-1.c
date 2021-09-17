//给定b的值，输入a m   求a*b和a^m的值
#include<stdio.h>
int A1;
int main(){
    int power(int);
    int b=3,c,d,m;
    printf("enter the number a and its power m:\n");
    scanf("%d,%d",&A1,&m);
    c=A1*b;
    printf("%d * %d=%d\n",A1,b,c);
    d=power(m);
    printf("%d* %d =%d\n",A1,m,d);
    return 0;
}

