//引用指针方法，输入两个数，按先大后小输出 用函数处理
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
    printf("max=%d,min=%d\n",a,b);
    return 0;
}

void swap(int* p1,int* p2){ //* p1 p2等价于a,b
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

