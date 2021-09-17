//使用指向指针数据的指针变量
//指针数组，引出了多重指针方法。
#include<stdio.h>
int main(){
    //定义一个指针数组，用各字符串对它进行初始化，即把各字符串中第一个字符的地址赋给指针数组的各元素
    //字符型指针数组，存放指针的数组，里面元素是指向字符串中首字符的指针
    char *name[]={"Follow","BASIC","Great Wall","FORTRAN","Computer design"};
    //定义一个指向指针数据的指针变量p
    // char **p 可以分成 char* (*p)
    //(*p)表示p是指针变量, char* 表示p指向char*类型的数据=指向char的指针
    char * *p;
    int i;
    for(i=0;i<5;i++){
        //p=name+i=name[i]的地址，
        p=name+i;
        //*p=name[i]=数组中的，字符串中的，首字符的地址
        printf("%s\n",*p);
    }
    return 0;
}

