//将字符串a复制为字符串b，然后输出字符串b  用指针变量访问字符串
//通过改变指针变量的值，使它指向字符串中的不同字符
#include<stdio.h>
int main(){
    char a[]="I am boy.",b[20],*p1,*p2;
    p1=a;p2=b; //把数组的首元素地址赋给指针变量
    for(;*p1!='\0';p1++,p2++)
        *p2=*p1;  //把a数组的元素，依次赋给b数组
    *p2='\0'; //在b数组末尾加一个空字符结束‘\0’
    printf("string a is:%s\n",a);
    printf("string b is:%s\n",b);
}