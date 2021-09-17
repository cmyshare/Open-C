//有一个磁盘文件，内有一些信息，第一次操作将内容显示到屏幕上，第二次把复制到另一个文件上。
#include<stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp1,*fp2;
    fp1=fopen("file1.dat","r"); //打开输入文件 读取
    if(fp1==NULL){
        printf("can't open file");
        exit(0);
    }
    fp2=fopen("file2.dat","w"); //打开输出文件 写入 从内存输出到磁盘
    if(fp2==NULL){
        printf("can't open file");
        exit(0);
    }
    while (!feof(fp1)) putchar(getc(fp1)); //逐个读入字符并输出到屏幕
    putchar(10); //输出一个换行
    rewind(fp1); //使文件位置标记返回文件头
    while (!feof(fp1)) putc(getc(fp1),fp2); //从文件头重新逐个读字符，把file2的内容输出到file2文件中
    fclose(fp1); fclose(fp2);
    return 0;


}

