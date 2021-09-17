//用函数求整数a和b中的大者 指向函数的指针
#include<stdio.h>

////1通过函数名调用函数
//int main() {
//    int max(int, int);
//    int a, b, c;
//    printf("please enter a and b:");
//    scanf("%d,%d", &a, &b);
//    c = max(a, b);
//    printf("a=%d\n b=%d\n max=%d\n", a, b, c);
//    return 0;
//}
//int max(int x,int y){
//    int z;
//    if(x>y) z=x;
//    else z=y;
//    return(z);
//}

//2通过指针变量访问它所指向的函数
int main() {
    int max(int, int);
    int (*p)(int,int); //定义指向函数的指针变量P
    p=max;  //p指向max函数 把函数的起始地址(入口地址)赋给p
    int a, b, c;
    printf("please enter a and b:");
    scanf("%d,%d", &a, &b);
    c =(*p)(a,b);  //通过指针变量调用max函数  (*p)=max函数
    printf("a=%d\n b=%d\n max=%d\n", a, b, c);
    return 0;
}
int max(int x,int y){ //定义max函数
    int z;
    if(x>y) z=x;
    else z=y;
    return(z);
}
