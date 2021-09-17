//向文件读写字符： 读r是读取，写w是写入
//例题：从键盘上输入一些字符,逐个把他们送到磁盘上去，直到用户输入“#”

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp; //定义一个指向文件型数据的指针变量
    char ch,filename[10];
    printf("请输入所用的文件名：");
    scanf("%s",filename);
    //打开输出文件并使fp指向此文件 w表示只能写入不能读取数据
    fp=fopen(filename,"w");
    if(fp==NULL){
        printf("无法打开此文件\n");  //如果打开时出错，就输出打不开的信息
        exit(0); //终止程序
    }

    ch=getchar(); //用来接收最后输入的回车符
    printf("请输入一个准备存储到磁盘的字符串(以#结束)：");
    ch=getchar();//接收从键盘输入的第一个字符

    while (ch!='#') //当输入‘#’时结束循环  循环写入字符到磁盘上
    {
        fputc(ch,fp);//向磁盘文件输出一个字符
        putchar(ch);//将输出的字符显示在屏幕上
        ch=getchar();//在接收从键盘输入的一个字符
    }

//    char a=fgetc(fp);//从fp指向的文件读取一个字符
//    printf("输出读取的字符：%c",a);

    fclose(fp);//关闭文件
    putchar(10);//向屏幕输出一个换行符
    return 0;
}
