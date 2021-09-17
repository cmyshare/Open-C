//改变指针变量的值
#include<stdio.h>
int main(){
    char *a="I love China";
    a=a+7;//改变指针变量的值，改变指向
    printf("%s\n",a);//输出从a指向的字符开始的字符串

    //而数组名是一个固定的值，首元素地址。不能更改
//    char str[]={"I love China"};
    char str1[]="I love China";
//    str = str+7;  //不能修改
    printf("%s",str1);


    return 0;
}
