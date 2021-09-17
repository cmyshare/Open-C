//函数调用求两个float数中的最大值

int max(float x,float y){
    float z;
    z=x>y? x:y;
    return(z); //把float类型转换成int
}

#include <stdio.h>
int main() {
    int max(float x,float y);//对调用函数的声明
    float a,b;
    int c;
    printf("please enter two integer numbers:");
    scanf("%f,%f",&a,&b);
    c=max(a,b);
    printf("max is %d\n",c);
    return 0;
}



