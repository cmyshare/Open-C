//用指针函数的指针作函数参数
//有两个整数a和b，用户输入1，2，3  分别调用不同的函数
#include<stdio.h>
int main(){
    int fun(int x,int y,int(*p)(int,int)); //fun函数声明
    int max(int,int);
    int min(int,int);
    int add(int,int);
    int a=34,b=-21,n;

    printf("please choose 1,2 or 3:");
    scanf("%d",&n);

    if(n==1) fun(a,b,max); //判断后，函数入口地址作为实参。函数名代表函数的入口地址
    else if(n==2) fun(a,b,min);
    else if(n==3) fun(a,b,add);

    return 0;
}

int fun(int x,int y,int(*p)(int,int)){    //定义一个指向函数的指针int(*p)(int,int)作为形参
    int result;
    result=(*p)(x,y);  //调用p指向的函数(*p)(x,y)
    printf("%d\n",result); //输出函数的返回值
}

int max(int x,int y){
    int z;
    if(x>y) z=x;
    else z=y;
    printf("max=");
    return (z);
}

int min(int x,int y){
    int z;
    if (x<y) z=x;
    else z=y;
    printf("min=");
    return (z);
}

int add(int x,int y){
    int z;
    z=x+y;
    printf("sum=");
    return (z);
}
