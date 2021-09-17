//引用指针方法，输入两个数，按先大后小输出
#include<stdio.h>
int main(){
    int *p1,*p2,*p,a,b; //p1,p2指针变量的 指针类型为int*类型  *为指向意思
    printf("please enter two integer numbers:");
    scanf("%d,%d",&a,&b); //输入两个整数，分别放在a,b的地址处，然后分别把值赋给a,b
    p1=&a; //把a地址给指针变量p1，表示p1指向a
    p2=&b;
    if(a<b){
        p=p1;
        p1=p2;
        p2=p;
    }
    printf("a=%d,b=%d\n",a,b);
    printf("max=%d,min=%d\n",*p1,*p2);//输出p1 p2指向的变量的值a b
    return 0;
}

