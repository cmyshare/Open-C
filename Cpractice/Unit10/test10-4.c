////从键盘输入10个学生的有关数据，然后把他们转存到磁盘文件上  fread() fwrite()
////buffer：存放数据的地址/写入数据的初始地址  size：读写的字节数  count：要读写多少个数据项  fp：FILE类型指针
#include<stdio.h>
#include <stdlib.h>
//定义一个字符常量 SIZE=10
#define SIZE 10
//声明一个结构体类型struct Student_type
struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[SIZE]; //定义结构体数组并初始化stud[SIZE]

//将内存数据写磁盘数据的save()函数
void save(){
    //定义指向文件型数据的指针变量fp
    FILE * fp;
    int i;
    //打开输出文件并使fp指向此文件 wb表示只能写入不能读取数据，二进制写方式
    fp=fopen("stu.dat","wb");
    if(fp==NULL){
        printf("can't open file");
        return;
    }
    //向磁盘输出/写入数据
    for(i=0;i<SIZE;i++){
        //向fp指向的文件写入一个多少字节的结构体数组stud数据。&stud[i]为数据的初始地址
        if(fwrite(&stud[i],sizeof(struct Student_type),1,fp)!=1){
            printf("file write error");
        }
    }
    fclose(fp);
}

//从stu_list文件中读取数据，先放在结构体数组中，再调用save函数写入到stu.dat文件中
void load(){
    FILE * fp;
    int i;
    //打开输出文件并使fp指向此文件 wb表示只能写入不能读取数据，二进制写方式
    fp=fopen("stu_list.dat","rb");
    if(fp==NULL){
        printf("can't open file");
        return;
    }
    //从stu_list文件中读数据
    for(i=0;i<SIZE;i++){
        //向fp指向的文件写入一个多少字节的结构体数组stud数据。&stud[i]为数据的储存地址
        if(fread(&stud[i],sizeof(struct Student_type),1,fp)!=1){
            if(feof(fp)){
                fclose(fp);
                return;
            }
            printf("file write error\n");
        }
    }
    fclose(fp);


}

int main(){
//    int i;
//    printf("Please enter data of students:\n");
//    //输入一个SIZE个学生的数据，存放在数组stud中 存放在内存中
//    for(i=0;i<SIZE;i++){
//        scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
//    }

    //从stu_list文件中读取数据，放在结构体数组中
    load();
    //调用将内存数据写磁盘数据的save()函数
    save();


//    ////从stu.dat中读取数据并输出 fread()函数
//    int i1;
//    FILE *fp1;
//    //打开输入文件stu.dt 读写方式为rb 二进制读方式
//    fp1=fopen("stu.dat","rb");
//    if(fp1==NULL){
//        printf("cannot open file\n");
//        exit(0);
//    }
//    for (i1 = 0;  i1<SIZE ; i1++) {
//        //从fp指向的文件读入一组数据 读取成功后返回count值
//        //从fp1指向的文件读取一个结构体数组元素
//        fread(&stud[i1],sizeof(struct Student_type),1,fp1);
//        //在屏幕上输出这组数据
//        printf("%-10s %4d %4d %-15s\n",stud[i1].name,stud[i1].num,stud[i1].age,stud[i1].addr);
//    }
//    //关闭文件stu.dat
//    fclose(fp1);
    return 0;
}
