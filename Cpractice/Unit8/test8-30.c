//建立内存动态分配区和使用void指针, void型指针函数=空指针函数，
//不指向任何数据，只提供地址
#include<stdio.h>
#include<stdlib.h>
int main(){
    void check(int *);
    int *p1,i;
    //开辟动态内存区，分配到5个字节临时分配域，将地址转换成int*型，然后放在p1中
//    sizeof()是一个关键字，它是一个编译时运算符，用于判断变量或数据类型的字节大小。

//    malloc是向bai系统申请内存空间的函数，返回du值是void *
//    很明显，zhip1一定是定义为int *p1;的，所以强制malloc返回的指针dao更改类型为int *
//    malloc的参数说明要申请多少字节数据，这里要申请一个连续5个整型的数据区，
//    所以用5乘以每个int占用的字节数，即5*sizeof(int)
    p1=(int*)malloc(5*sizeof(int));

    for(i=0;i<5;i++){
        //输入5个学生的成绩
        scanf("%d ",p1+i);
    }
    //调用check函数
    check(p1);
    return 0;
}

//定义check函数，形参是int*指针
void check(int *p){
    int i;
    printf("They are fail:");
    for (i = 0;  i<5 ; i++) {
        if (p[i]<60) printf("%d",p[i]);
    }
    printf("\n");
}

