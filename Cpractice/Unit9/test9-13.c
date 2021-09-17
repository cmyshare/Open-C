////用typedef声明新类型名
#include<stdio.h>
int main(){
    ////1用一个新类型名代替原有的类型名
    typedef int Integer; //用Integer代替int类型名 类型不变
    typedef float Real; //制定Real代替float类型名
    //两行代码等价
    int i,j; float a,b;
    Integer i1,j1; Real a1,b1;

    ////2一个简单类型名代替复杂的类型表示方法
    //2-1用新类型名Date代替结构体类型
    typedef struct {
        int month;
        int day;
        int year;
    }Date;
    //定义变量
    Date birthday;
    Date *p;

    //2-2用新类型名Num代替数组类型
    typedef int Num[100];
    Num a2;

    //2-3用新类型名代替指针类型
    typedef char* String; //声明String为字符指针类型
    String p3,s[10];

    //2-4用新类型名代替指向函数的指针类型
    typedef int(*Pointer) ();//声明Pointer为指向函数的指针类型，返回整型值
    Pointer p4,p44;










}