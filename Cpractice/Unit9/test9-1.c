// 把学生的信息放在一个结构体变量中，然后调用输出这个学生的信息
#include<stdio.h>
int main(){
    // 声明结构体类型struct Student
    struct Student{
        //下面4行为结构体的成员
        long int num;
        char name[20];
        char sex;
        char addr[20];
    }a={10101,"Li Lin",'M',"123 Beijing Road"}; //定义结构体变量a并初始化
    printf("NO.:%1d\n name:%s\n sex:%c\n address:%s\n",a.num,a.name,a.sex,a.addr);
    printf("%d",1,2,3);
    return 0;
}