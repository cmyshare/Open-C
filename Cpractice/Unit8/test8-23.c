//通过指针变量调用函数比较灵活，通过改变指针的指向
//输入两个整数，通过用户选择1/2，选择max函数/min函数
#include<stdio.h>
int main(){
    int max(int,int);
    int min(int x,int y);
    int (*p)(int,int);  //定义指向函数的指针，
    int a,b,c,n;

    printf("please enter a and b:");
    scanf("%d,%d",&a,&b);
    printf("please choose 1 or 2:");
    scanf("%d",&n);

    if(n==1) p=max;   //修改指针的函数指向
    else if(n==2) p=min;

    c=(*p)(a,b);
    printf("a=%d,b=%d\n",a,b);

    if (n==1) printf("max=%d",c);
    else printf("min=%d",c);

    return 0;
}

int max(int x,int y){
    int z;
    if(x>y) z=x;
    else z=y;
    return (z);
}

int min(int x,int y){
    int z;
    if (x<y) z=x;
    else z=y;
    return (z);
}

