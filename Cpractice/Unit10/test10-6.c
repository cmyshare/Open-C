//磁盘文件上有10个学生数据，要求将第1,3,5,7,9个学生数据输入计算机，在屏幕上显示
#include<stdio.h>
#include<stdlib.h>
//声明一个结构体类型struct Student_type
struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[10]; //定义结构体数组并初始化stud[10]

int main(){
    int i;
    FILE *fp;
    //以只读方式打开二进制文件
    fp=fopen("stu.dat","rb");
    if(fp==NULL){
        printf("can not open file\n");
        exit(0);
    }

    for(i=0;i<10;i+=2){
        //移动文件位置标记，向前移动位置标记离文件头i个字节
        fseek(fp,i*sizeof(struct Student_type),0);
        //读一个数据块到结构体变量
        fread(&stud[i],sizeof(struct Student_type),1,fp);
        //检查输入输出函数错误
        int a=ferror(fp); if(a==0){
            printf("未出错\t");
        }
        //使文件错误标志，文件结束标志为0。ferror(fp)=0 以便于下一次的检测
        clearerr(fp);
        //确定当前位置
        int b=ftell(fp); if(b!=-1L){
            printf("%d\t",b);
        }
        //屏幕输出
        printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
    }
    fclose(fp);
    return 0;
}

