////将一个磁盘文件中的信息复制到另一个磁盘中。将上例的file1.dat内容复制到file2.dat
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *in,*out; //定义指向FILE类型文件的指针变量
    char ch,infile[10],outfile[10]; //定义两个字符数组，分别存放两个数据文件名

    printf("输入输入/读取文件的名字：");
    scanf("%s",infile); //输入一个输入文件的名字
    printf("输入输出/写入文件的名字：");
    scanf("%s",outfile); //输入一个输出文件的名字

    in=fopen(infile,"r"); //打开输入文件 读取
    if(in==NULL){
        printf("无法打开此文件\n");
        exit(0);
    }

    out=fopen(outfile,"w"); //打开输出文件 写入
    if(out==NULL){
        printf("无法打开此文件\n");
        exit(0);
    }

    while (!feof(in)) //如果未遇到输入文件的结束标志 用feof()函数检查文件读写位置是否移到末尾
    {
        ch=fgetc(in); //从输入文件读入一个字符，暂放在变量ch中
        fputc(ch,out); //将ch写到输出文件中
        putchar(ch);   //将ch显示在屏幕上
    }

    putchar(10); //显示完全部字符后换行
    fclose(in); //关闭输入文件 读取
    fclose(out); //关闭输出文件 写入
    return 0;
}

////从file1中复制到file2中，在file2最后的复制结果是乱码
