//引用指针方法，输入两个数，按先大后小输出 用函数处理
//在函数中改变形参(指针变量)的值，进而改变实参(指针变量)的值
//错误用法举例
#include<stdio.h>
int main(){
    void swap(int* p1,int* p2);
    int a,b;
    int *pointer_1,*pointer_2;
    printf("please enter a and b:");
    scanf("%d,%d",&a,&b);
    pointer_1=&a;
    pointer_2=&b;
    if(a<b) swap(pointer_1,pointer_2);
    printf("max=%d,min=%d\n",*pointer_1,*pointer_2);
    return 0;
}

void swap(int* p1,int* p2){ //* p1 p2等价于a,b
    int * temp;
    temp=p1;   //p1 p2交换了，不等于pointer_1,pointer_2交换了
    p1=p2;     //因为指针变量也要遵守“单向传送”的"值传送"方式
    p2=temp;
}


