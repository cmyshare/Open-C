//定义一个整型指针数组，用指向指针树数据的指针变量输出各元素的值
#include<stdio.h>
//int main(){
//    int a[5]={1,3,5,7,9};
//    int *num[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
//    //p是指向指针型数据的指针变量
//    int **p,i;
//    //使p指向num[0]
//    p=num;
//    for(i=0;i<5;i++){
//        //输出*p=num[0]  **p=*num[0]
//        printf("%d ",**p);
//        p++;
//    }
//    printf("\n");
//    return 0;
//}


//在命令行中输入China Beijing 再执行程序
//带参数的main函数原型int main(int argc,char * argv[])
//argc表示参数个数，argv表示参数数组
int main(int argc,char * argv[]){
    while (argc>1){
        ++argc;
        printf("%s\n",argv);
        --argc;
    }
    return 0;

}