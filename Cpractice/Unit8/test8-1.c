//通过指针变量
#include<stdio.h>
#include <stdlib.h>

int main(){
    int a=100,b=10;
    int *pointer_1,*pointer_2; //定义指向整型数据的指针变量*pointer_1,*pointer_2
    pointer_1=&a; //将变量a的地址赋给指针变量*pointer_1
    pointer_2=&b; //%p输出变量&b的地址
    printf("a=%d,b=%d\n",a,b);
    printf("*pointer_1=%d,*pointer_2=%d",*pointer_1,*pointer_2);

    //*pointer_1表示pointer_1(存放的地址)指向的对象(变量单元/存储单元)
    //通过指针变量，取出a的地址，通过a的地址找到a的储存单元，把值读取出来

//    int aa;

//    char bb[100];
//    scanf("%d",&aa);
//    itoa(aa,bb,2); // 输出二进制的函数
//    printf("%s",bb);



    return 0;
}

