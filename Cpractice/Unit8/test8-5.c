//引用指针方法，输入三个数，按先大后小输出 用函数处理
#include<stdio.h>
int main(){
    void exchange(int *q1,int *q2,int *q3);//声明exchange函数，省略extern扩展声明
    int a,b,c,*p1,*p2,*p3;
    printf("please enter three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    exchange(p1,p2,p3);
    printf("The order is:%d,%d,%d\n",a,b,c);
    return 0;
}
void exchange(int *q1,int *q2,int *q3){
    void swap(int* p1,int* p2); //声明swap函数
    if(*q1<*q2) swap(q1,q2);
    if(*q1<*q3) swap(q1,q3);
    if(*q2<*q3) swap(q2,q3);
}


void swap(int* pt1,int* pt2){ //* p1 p2等价于a,b
    int temp;
    temp=*pt1;
    *pt1=*pt2;
    *pt2=temp;
}

