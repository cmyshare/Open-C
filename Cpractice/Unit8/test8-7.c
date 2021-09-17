//通过指针变量输出整型数组a的10个元素
#include<stdio.h>
int main(){
    int i,a[10],*p=a;
    printf("please enter 10 integer numbers:");
    for(i=0;i<10;i++){
        scanf("%d",p++); //第一个循环结束后，p指向的是数组末尾a[9]
    }
    p=a; //这里加一个p=a，让循环从首元素地址出发，不然p起始值是a+10。
    for(i=0;i<10;i++,p++){
        printf("%d",*p);
    }
    printf("\n");
    return 0;

    //利用指针引用数组元素
    //* p++ 先引用p的值*p,再进行p自增
    //* ++p 先p+1再引用p的值*p
    //++(*p) 表示p所指向的元素值加1


}